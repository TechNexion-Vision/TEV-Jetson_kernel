/*
 *  Copyright (C) 2020 TechNexion Ltd.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */


#ifndef __PINCTRL_AXONFABRIC_H
#define __PINCTRL_AXONFABRIC_H

#define AXONF_PIN_DESC(name) PINCTRL_PIN(AXONF_PIN_ ## name, #name)

struct axonf_pingroup {
	const char *name;
	const unsigned pins[1];
	unsigned npins;
};

#define AXONF_PINGROUP(pg_name, pin_id) {.name = #pg_name,	.pins = {AXONF_PIN_##pin_id}, .npins = 1,}

#endif /*__PINCTRL_AXONFABRIC_H*/
