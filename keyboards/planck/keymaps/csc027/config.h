/*
Copyright 2021 Constantine Chen @csc027

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

<<<<<<< HEAD:keyboards/planck/keymaps/csc027/config.h
#define USB_POLLING_INTERVAL_MS 1
=======
#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_SPLIT { 27, 27 }
#    define SPLIT_TRANSPORT_MIRROR
#endif
>>>>>>> mod-tap-combos:keyboards/crkbd/rev1/common/config.h

#if defined(TAP_CODE_DELAY)
#    undef TAP_CODE_DELAY
#endif
#define TAP_CODE_DELAY 10
