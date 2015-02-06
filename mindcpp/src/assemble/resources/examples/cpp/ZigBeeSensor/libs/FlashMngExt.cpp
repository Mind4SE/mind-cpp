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

 // This code represents legacy code.
 // This legacy code can be some source code or a library (.a;.so;.lib;.dll)
 
#include <stdio.h>
#include <iostream>
#include "FlashMngExt.hpp"

using namespace std;
 
void FlashMngExt::WriteByte(int address, int byte) {
	cout << "Write " << byte << " bytes" << " at address " << address << "\n"; 
}

void FlashMngExt::ReadByte(int address, int *byte) {
	cout << "Read " << *byte << " bytes" << " at address " << address << "\n";
}
