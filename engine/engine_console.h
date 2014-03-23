/*  Copyright (C) 1996-2001 Id Software, Inc.
    Copyright (C) 2002-2009 John Fitzgibbons and others
    Copyright (C) 2011-2014 OldTimes Software

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version 2
    of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

    See the GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/
#ifndef __ENGINECONSOLE__
#define __ENGINECONSOLE__

#include "quakedef.h"

void Console_ErrorMessage(bool bCrash,const char *ccFile,char *reason);
void Console_WriteToLog(char *file,char *fmt,...);
void Console_Initialize(void);

// Other crap...
char *Con_Quakebar(int len);
void Con_LogCenterPrint(char *str);

#endif
