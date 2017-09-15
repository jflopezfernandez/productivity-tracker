
/** In this file, all numeric macros, functions, and definitions are laid out,
 *  in addition to the typedefs added for readability purposes. For example,
 *  rather than using a plain integer return value for functions, a typedef has
 *  been applied for functions to return a 'Status', and users to enter integral-
 *  type 'Option' values.
 *
 *  Author: Jose Fernando Lopez Fernandez
 *  Date:   15-September-2017
 *
 */

#ifndef MASTERY_NUMERIC_H
#define MASTERY_NUMERIC_H

#define YES 1
#define NO  0

#define TRUE  1
#define FALSE 0

#define ENABLED  1
#define DISABLED 0

#define UNINITIALIZED -1

#define NOT(x) !(x)
#define ABS(x) ((x > 0) : x ? NOT(x))


// Program Options
#define TIME_TRACKING 1



#endif //MASTERY_NUMERIC_H
