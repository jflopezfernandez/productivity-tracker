/** This file contains all of the standard library files from the C Standard
 *  Library. Every file from the Standard Library will be wrapped for
 *  testability/pragmatic purposes, but it will also allow the use of "external"
 *  include guards, which will expedite the compilation process as the project grows in size.
 *
 *  Author: Jose Fernando Lopez Fernandez
 *  Date:   15-September-2017
 *
 */

#ifndef PRODUCTIVITY_TRACKER_STDLIB_H
#define PRODUCTIVITY_TRACKER_STDLIB_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef PRODUCTIVITY_TRACKER_STRING_H
#include "stdlib/string.h"
#endif

#endif //PRODUCTIVITY_TRACKER_STDLIB_H
