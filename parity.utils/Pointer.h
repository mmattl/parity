/****************************************************************\
*                                                                *
* Copyright (C) 2007 by Markus Duft <markus.duft@salomon.at>     *
*                                                                *
* This file is part of parity.                                   *
*                                                                *
* parity is free software: you can redistribute it and/or modify *
* it under the terms of the GNU Lesser General Public License as *
* published by the Free Software Foundation, either version 3 of *
* the License, or (at your option) any later version.            *
*                                                                *
* parity is distributed in the hope that it will be useful,      *
* but WITHOUT ANY WARRANTY; without even the implied warranty of *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the  *
* GNU Lesser General Public License for more details.            *
*                                                                *
* You should have received a copy of the GNU Lesser General      *
* Public License along with parity. If not,                      *
* see <http://www.gnu.org/licenses/>.                            *
*                                                                *
\****************************************************************/

#ifndef __POINTER_H__
#define __POINTER_H__

//
// ATTENTION: cannot use any of the C++ cast operators in the MAKEPTR macro, since
// this may be used for _any_ data-type, one requiring reinterpret_cast, and others
// requiring static_cast.
//

#ifdef BITS64
#define MAKEPTR(cast, ptr, addValue) (reinterpret_cast<cast>(reinterpret_cast<unsigned long long>(ptr) + static_cast<unsigned long long>((addValue))))
#else
#define MAKEPTR(cast, ptr, addValue) (reinterpret_cast<cast>(reinterpret_cast<unsigned long>(ptr) + static_cast<unsigned long>((addValue))))
#endif

#endif

