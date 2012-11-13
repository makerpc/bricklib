/* bricklib
 * Copyright (C) 2011 Olaf Lüke <olaf@tinkerforge.com>
 *
 * mutex.h: Mutex functionality
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef MUTEX_H
#define MUTEX_H

#include "bricklib/free_rtos/include/FreeRTOS.h"
#include "bricklib/free_rtos/include/task.h"
#include "bricklib/free_rtos/include/semphr.h"

typedef xSemaphoreHandle Mutex;

#define MUTEX_BLOCKING portMAX_DELAY

void mutex_init();
Mutex mutex_create(void);
bool mutex_take(Mutex mutex, const uint32_t time);
bool mutex_give(Mutex mutex);

#endif
