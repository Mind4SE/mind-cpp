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
 * Authors: Yves Teissier
 * Contributors: 
 */

#ifndef FLASHMNGEXT_HPP_
#define FLASHMNGEXT_HPP_


class FlashMngExt {
public:
    FlashMngExt() {};
	~FlashMngExt() {};
	void WriteByte(int address, int byte);
	void ReadByte(int address, int *byte);
};


#endif /* FLASHMNGEXT_HPP_ */
