/* Copyright 2020 Pa_Pi_Pudding
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

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k00, k01, k02  , k03  , k04  , k05  , k06, k07  , k08, k09, k0a, k0b  , k0c  , k0d  ,\
    k10, k11, k12  , k13  , k14  , k15  , k16, k17  , k18, k19, k1a, k1b  , k1c  , k1d  ,\
    k20, k21, k22  , k23  , k24  , k25  , k26, k27  , k28, k29, k2a, k2b  , k2c  , k2d  ,\
    k30, k31, k32  , k33  , k34  , k35  , k36, k37  , k38, k39, k3a, k3b  , k3c  , k3d  ,\
    k40, k41, k42  , k43  , k44  , k45  , k46, k47  , k48, k49, k4a, k4b  , k4c  , k4d  ,\
    k50, k51, k52  , k53  , k54  , k55  , k56, k57  , k58, k59, k5a, k5b  , k5c  , k5d \
)\
  {\
    { k00, k01, k02  , k03  , k04  , k05  , k06, k07  , k08, k09, k0a, k0b  , k0c  , KC_NO ,},\
    { k10, k11, k12  , k13  , k14  , k15  , k16, k17  , k18, k19, k1a, k1b  , k1c  , k1d,},\
    { k20, k21, k22  , k23  , k24  , k25  , k26, k27  , k28, k29, k2a, k2b  , k2c  , KC_NO ,},\
    { k30, k31, k32  , k33  , k34  , k35  , k36, k37  , k38, k39, k3a, k3b  , k3c  , KC_NO ,},\
    { k40, k41, k42  , k43  , k44  , k45  , k46, k47  , k48, k49, k4a, k4b  , k4c  , KC_NO ,},\
    { k50, k51, k52, KC_NO, KC_NO, KC_NO, k56, KC_NO, k58, k59, k5a, KC_NO, KC_NO, KC_NO }\
}
