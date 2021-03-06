/*
	Copyright 2013-2015 Benjamin Vedder	benjamin@vedder.se

	This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef POS_H_
#define POS_H_

#include "chtypes.h"
#include "conf_general.h"

// Functions
void pos_init(void);
void pos_zero_speed(void);
POS_STATE_t *pos_get_state(void);
void pos_update(float roll, float pitch, float yaw, float dt);
void pos_correct_altitude(float alt);
void pos_correct_anchor(int anchor_id, float anchor_distance);
ANCHOR_STATE_t *pos_get_anchor(int id);

#endif /* POS_H_ */
