/*
Copyright (C) 2003-2008 Andrey Nazarov

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

// vid_public.h -- interface to the host window system

qboolean    VID_Init( void );
void        VID_Shutdown( void );
void        VID_FatalShutdown( void );

void    VID_UpdateGamma( const byte *table );
void    VID_UpdatePalette( const byte *palette );
void    *VID_GetProcAddr( const char *symbol );

void    VID_BeginFrame( void );
void    VID_EndFrame( void );

char    *VID_GetClipboardData( void );
void    VID_SetClipboardData( const char *data );