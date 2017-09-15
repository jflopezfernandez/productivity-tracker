
/** This header file contains the C Standard Library Time header, as well as a
 *  few macros and functions for ease of use improvement.
 *
 *  Author: Jose Fernando Lopez Fernandez
 *  Date:   15-September-2017
 *
 */

#ifndef MASTERY_TIME_H
#define MASTERY_TIME_H

#include <time.h>

#define STRING_STRUCT(t)          (asctime(t))
#define STRING_TIME(t)            (ctime(t))
#define SECONDS_DIFFERENTIAL(x,y) (difftime(x,y))
#define GET_LOCALTIME(t)          (localtime(t))
#define GET_TIME_FROM_STRUCT(t)   (mktime(t))
#define GET_TIME(t)               (time(t))

#define NOW                       (time(NULL))
#define STRING_CURRENT_TIME(t,v)  (ctime(&(t){ v }))

#define TIME_T_TO_STRUCT(x,y)      time_t x = NOW;                    \
                                   time_t* timePtr = &x;              \
                                   struct tm* y = localtime(timePtr);

typedef time_t*    tTime;
typedef struct tm* sTime;



#endif //MASTERY_TIME_H
