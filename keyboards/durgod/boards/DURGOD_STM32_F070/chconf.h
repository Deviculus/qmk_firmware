/* Copyright 2020 QMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * This file was auto-generated by:
<<<<<<< HEAD
 *    `qmk chibios-confmigrate -i keyboards/durgod/k320/chconf.h -r platforms/chibios/common/configs/chconf.h`
=======
 *    `qmk chibios-confmigrate -i keyboards/ferris/0_2/chconf.h -r platforms/chibios/common/configs/chconf.h`
>>>>>>> mod-tap-combos
 */

#pragma once

#define CH_CFG_ST_FREQUENCY 10000

<<<<<<< HEAD
#define CH_CFG_ST_TIMEDELTA 0
=======
<<<<<<< HEAD:keyboards/ferris/0_2/chconf.h
#define CH_CFG_OPTIMIZE_SPEED FALSE

#define CH_CFG_USE_REGISTRY TRUE

#define CH_CFG_USE_WAITEXIT TRUE

#define CH_CFG_USE_CONDVARS TRUE

#define CH_CFG_USE_CONDVARS_TIMEOUT FALSE

#define CH_CFG_USE_MESSAGES TRUE

#define CH_CFG_USE_MAILBOXES TRUE
=======
#define CH_CFG_ST_TIMEDELTA 0
>>>>>>> mod-tap-combos:keyboards/durgod/boards/DURGOD_STM32_F070/chconf.h
>>>>>>> mod-tap-combos

#include_next <chconf.h>
