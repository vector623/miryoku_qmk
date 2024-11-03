// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define ENCODER_A_PINS { F4 }
#define ENCODER_B_PINS { F5 }
#ifdef ENCODER_RESOLUTION
    #undef ENCODER_RESOLUTION
#endif
#define ENCODER_RESOLUTION 4


#define K41 KC_1
#define K42 KC_2
#define K43 KC_3
#define K44 KC_4
#define K45 KC_5
#define K46 KC_6
#define K47 KC_7
#define K48 KC_8
#define K49 KC_9
#define K50 KC_0

#define K51 KC_F1
#define K52 KC_F2
#define K53 KC_F3
#define K54 KC_F4
#define K55 KC_F5
#define K56 KC_F6
#define K57 KC_F7
#define K58 KC_F8
#define K59 KC_F9
#define K60 KC_F10
#define K61 KC_F11
#define K62 KC_F12

#define K64 KC_MUTE

#define OLED_TIMEOUT 60000
