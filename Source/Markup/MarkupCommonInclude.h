/* -*-objc-*-
   CommonLibraryInclude.h

   Copyright (C) 2007 Free Software Foundation, Inc.

   Author: Nicola Pero <nicola.pero@meta-innovation.com>
   Date: April 2007

   This file is part of GNUstep Renaissance

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with this library; see the file COPYING.LIB.
   If not, write to the Free Software Foundation,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

/* This header contains all the common library includes used by
 * the ObjC files when compiling.  It is precompiled to boost
 * compilation speed on machines that support it.
 *
 * This header is a private internal header that should never be
 * installed.
 */

#include <Foundation/Foundation.h>

#ifndef GNUSTEP
# include "GNUstep.h"
#endif
