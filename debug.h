/*
 * debug - Simple, single-file debug toolkit for C/C++
 * debug.h - main toolkit file
 *
 * Copyright (C) 2012 Lukasz Sowa <luksow@gmail.com>
 */

#ifndef NDEBUG
#include <stdio.h>
#include <stdlib.h>

#define debug(FMT, ...) fprintf(stderr, "[%s: %s: %d] " FMT "\n", __FILE__, __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#define debug_if(COND, FMT, ...) do { if (COND) debug(FMT, ##__VA_ARGS__); } while (0)
#define abort_if(COND) do { if (COND) { debug("Aborting..."); abort(); } } while (0)

#else

#define debug(FMT, ...) do { } while (0)
#define debug_if(COND, FMT, ...) do { } while (0)
#define abort_if(COND) do { } while (0)

#endif
