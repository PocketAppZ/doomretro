/*
==============================================================================

                                 DOOM Retro
           The classic, refined DOOM source port. For Windows PC.

==============================================================================

    Copyright © 1993-2024 by id Software LLC, a ZeniMax Media company.
    Copyright © 2013-2024 by Brad Harding <mailto:brad@doomretro.com>.

    This file is a part of DOOM Retro.

    DOOM Retro is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by the
    Free Software Foundation, either version 3 of the license, or (at your
    option) any later version.

    DOOM Retro is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with DOOM Retro. If not, see <https://www.gnu.org/licenses/>.

    DOOM is a registered trademark of id Software LLC, a ZeniMax Media
    company, in the US and/or other countries, and is used without
    permission. All other trademarks are the property of their respective
    holders. DOOM Retro is in no way affiliated with nor endorsed by
    id Software.

==============================================================================
*/

#pragma once

#include "SDL_gamecontroller.h"

#define GAMECONTROLLER_A                    0x00000001
#define GAMECONTROLLER_B                    0x00000002
#define GAMECONTROLLER_X                    0x00000004
#define GAMECONTROLLER_Y                    0x00000008
#define GAMECONTROLLER_BACK                 0x00000010
#define GAMECONTROLLER_GUIDE                0x00000020
#define GAMECONTROLLER_START                0x00000040
#define GAMECONTROLLER_LEFT_THUMB           0x00000080
#define GAMECONTROLLER_RIGHT_THUMB          0x00000100
#define GAMECONTROLLER_LEFT_SHOULDER        0x00000200
#define GAMECONTROLLER_RIGHT_SHOULDER       0x00000400
#define GAMECONTROLLER_DPAD_UP              0x00000800
#define GAMECONTROLLER_DPAD_DOWN            0x00001000
#define GAMECONTROLLER_DPAD_LEFT            0x00002000
#define GAMECONTROLLER_DPAD_RIGHT           0x00004000
#define GAMECONTROLLER_MISC1                0x00008000
#define GAMECONTROLLER_PADDLE1              0x00010000
#define GAMECONTROLLER_PADDLE2              0x00020000
#define GAMECONTROLLER_PADDLE3              0x00040000
#define GAMECONTROLLER_PADDLE4              0x00080000
#define GAMECONTROLLER_TOUCHPAD             0x00100000
#define GAMECONTROLLER_LEFT_TRIGGER         0x00200000
#define GAMECONTROLLER_RIGHT_TRIGGER        0x00400000

#define GAMECONTROLLER_TRIGGER_THRESHOLD    3855

#define IDLE_CHAINSAW_RUMBLE_STRENGTH       10000

extern int      barrelrumbletics;
extern int      damagerumbletics;
extern int      pickuprumbletics;
extern int      weaponrumbletics;

extern int      gamecontrollerbuttons;
extern short    gamecontrollerthumbLX;
extern short    gamecontrollerthumbLY;
extern short    gamecontrollerthumbRX;
extern short    gamecontrollerthumbRY;
extern int      idlechainsawrumblestrength;
extern int      restoredrumblestrength;
extern float    gamecontrollerhorizontalsensitivity;
extern float    gamecontrollerverticalsensitivity;
extern short    gamecontrollerleftdeadzone;
extern short    gamecontrollerrightdeadzone;

extern char     *selectbutton;

void I_InitGameController(void);
void I_ShutdownGameController(void);
void I_GameControllerRumble(const short low, const short high);
void I_ReadGameController(void);
void I_StopGameControllerRumble(void);
void I_SetGameControllerHorizontalSensitivity(void);
void I_SetGameControllerVerticalSensitivity(void);
void I_SetGameControllerLeftDeadZone(void);
void I_SetGameControllerRightDeadZone(void);
