/*
===========================================================================

Daemon GPL Source Code
Copyright (C) 2012 Unvanquished Developers

This file is part of the Daemon GPL Source Code (Daemon Source Code).

Daemon Source Code is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Daemon Source Code is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Daemon Source Code.  If not, see <http://www.gnu.org/licenses/>.

In addition, the Daemon Source Code is also subject to certain additional terms.
You should have received a copy of these additional terms immediately following the
terms and conditions of the GNU General Public License which accompanied the Daemon
Source Code.  If not, please request a copy in writing from id Software at the address
below.

If you have questions concerning this license or the applicable additional terms, you
may contact in writing id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville,
Maryland 20850 USA.

===========================================================================
*/

#include "DetourDebugDraw.h"
#include "DebugDraw.h"
#include "bot_debug.h"
#include "bot_local.h"

class DebugDrawQuake : public duDebugDraw
{
	BotDebugInterface_t *re;
public:
	void init(BotDebugInterface_t *in);
	void depthMask(bool state);
	void texture(bool) {};
	void begin(duDebugDrawPrimitives prim, float size = 1.0f);
	void vertex(const float* pos, unsigned int color);
	void vertex(const float x, const float y, const float z, unsigned int color);
	void vertex(const float* pos, unsigned int color, const float* uv);
	void vertex(const float x, const float y, const float z, unsigned int color, const float u, const float v);
	void end();
};

void BotDrawNavEdit( NavData_t *nav, DebugDrawQuake *dd );
