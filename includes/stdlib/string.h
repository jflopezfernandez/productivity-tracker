/** This file is a small wrapper around the standard String header to allow
 *  for the logical inclusion of a few more "semantically sensible" macros,
 *  as well as the use of external include guards.
 *
 *  Author: Jose Fernando Lopez Fernandez
 *  Date:   15-September-2015
 *
 */


#ifndef PRODUCTIVITY_TRACKER_STRING_H
#define PRODUCTIVITY_TRACKER_STRING_H

#include <string.h>

#define ARE_EQUAL(x,y) (strcmp(x,y) == 0)

#endif //PRODUCTIVITY_TRACKER_STRING_H
