/**
 * Copyright (C) 2014 Schneider-Electric
 *
 * This file is part of "Mind Compiler" is free software: you can redistribute 
 * it and/or modify it under the terms of the GNU Lesser General Public License 
 * as published by the Free Software Foundation, either version 3 of the 
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT 
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Contact: mind@ow2.org
 *
 * Authors: Stephane Seyvoz
 * Contributors: 
 */

package org.ow2.mind.idl;

import static org.ow2.mind.PathHelper.getExtension;
import static org.ow2.mind.idl.ast.CppInclude.CPP_HEADER_EXTENSION_0;
import static org.ow2.mind.idl.ast.CppInclude.CPP_HEADER_EXTENSION_1;
import static org.ow2.mind.idl.ast.CppInclude.CPP_HEADER_EXTENSION_2;
import static org.ow2.mind.idl.ast.CppInclude.CPP_HEADER_EXTENSION_3;
import static org.ow2.mind.idl.ast.CppInclude.HEADER_EXTENSION;

import java.util.Map;

import org.objectweb.fractal.adl.ADLException;
import org.objectweb.fractal.adl.NodeFactory;
import org.ow2.mind.CommonASTHelper;
import org.ow2.mind.idl.IDLLoader.AbstractDelegatingIDLLoader;
import org.ow2.mind.idl.ast.Header;
import org.ow2.mind.idl.ast.IDL;

import com.google.inject.Inject;

/**
 * This class replaces the usual @see HeaderLoader to allow C++ extensions.
 * See Module class and mind-plugin.xml for override details.
 *
 */
public class CppHeaderLoader extends AbstractDelegatingIDLLoader {

  @Inject
  protected NodeFactory nodeFactoryItf;

  // ---------------------------------------------------------------------------
  // Implementation of the UsedIDLResolver interface
  // ---------------------------------------------------------------------------

  public IDL load(final String name, final Map<Object, Object> context)
      throws ADLException {
    if (HEADER_EXTENSION.equals(getExtension(name))
        || CPP_HEADER_EXTENSION_0.equals(getExtension(name))
        || CPP_HEADER_EXTENSION_1.equals(getExtension(name))
        || CPP_HEADER_EXTENSION_2.equals(getExtension(name))
        || CPP_HEADER_EXTENSION_3.equals(getExtension(name))) {
      // load a header C/C++ file.
      // create a new Header AST node
      final Header header = CommonASTHelper.newNode(nodeFactoryItf, "header",
          Header.class);
      header.setName(name);
      return header;
    } else {
      return clientIDLLoaderItf.load(name, context);
    }
  }
}
