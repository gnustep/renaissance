#   GNUmakefile: main makefile for GNUstep Ink application, Renaissance version
#
#   Copyright (C) 2000, 2003 Free Software Foundation, Inc.
#
#   Authors: Fred Kiefer <fredkiefer@gmx.de>
#            Rodolfo W. Zitellini <xhero@libero.it>
#            Nicola Pero <n.pero@mi.flashnet.it>
#   Date: 2000, 2003
#   
#   This file is part of GNUstep.
#   
#   This program is free software; you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation; either version 2 of the License, or
#   (at your option) any later version.
#   
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#   
#   You should have received a copy of the GNU General Public License
#   along with this program; if not, write to the Free Software
#   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

include $(GNUSTEP_MAKEFILES)/common.make

OBJCFLAGS += -Wall

APP_NAME = Ink

Ink_OBJC_FILES = main.m Document.m
Ink_RESOURCE_FILES = Credits.rtf Readme.rtf Document.gsmarkup
Ink_PREPROCESS_INFO_PLIST = yes

ifeq ($(FOUNDATION_LIB), apple)
  ADDITIONAL_GUI_LIBS += -framework Renaissance
  Ink_RESOURCE_FILES += Images/Ink.icns \
			Images/Fileicon_rtf.icns \
			MainMenu-OSX.gsmarkup
  Ink_APPLICATION_ICON = Ink.icns
else
  ADDITIONAL_GUI_LIBS += -lRenaissance
  Ink_RESOURCE_FILES += Images/Ink_app.tiff \
			Images/FileIcon_rtf.tiff \
			Images/FileIcon_rtfd.tiff \
			Images/FileIcon_txt.tiff \
			MainMenu-GNUstep.gsmarkup
  Ink_APPLICATION_ICON = Ink_app
endif

Ink_LANGUAGES = Italian
Ink_LOCALIZED_RESOURCE_FILES = Ink.strings \
				MainMenu-GNUstep.strings \
				MainMenu-OSX.strings

include $(GNUSTEP_MAKEFILES)/application.make
