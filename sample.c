/*
 * debug - Simple, single-file debug toolkit for C/C++
 * sample.c - examples how to use the toolkit
 *
 * Copyright (C) 2012 Lukasz Sowa <luksow@gmail.com>
 */

#include "debug.h"

int main()
{
	debug("Hello debugging!");
	debug("%d %d %d", 1, 2, 3);
	debug_if(1 < 2, "1 is less than 2");
	debug_if(1 > 2, "1 is more than 2");
	abort_if(1 > 2);
	abort_if(2 > 1);

	return 0;
}
