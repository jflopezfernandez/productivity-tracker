
/** This file contains the necessary logic to handle errors during program
 *  execution. This file will also implement the setjmp longjmp mechanism
 *  in case it is needed at some point.
 *
 *  Author: Jose Fernando Lopez Fernandez
 *  Date:   15-September-2017
 *
 */

#ifndef MASTERY_ERROR_H
#define MASTERY_ERROR_H

#include <setjmp.h>
#include <errno.h>


// Error Codes
#define INVALID_USER_INPUT 100


#if defined NDEBUG
#define PRINT(msg,code)
#define PRINTMSG(msg)
#else
#define PRINT(msg,code) printf("[ERROR CODE %i - %s, %s] %s (file: %s, line: %li) \n", \
                              code,                                                    \
                            __DATE__,                                                  \
                            __TIME__,                                                  \
                              msg,                                                     \
                            __FILE__,                                                  \
                            __LINE__);

#define PRINTMSG(msg) printf("[ERROR CODE %i - %s, %s] %s (file: %s, line: %li) \n",   \
                            __DATE__,                                                  \
                            __TIME__,                                                  \
                              msg,                                                     \
                            __FILE__,                                                  \
                            __LINE__);

#endif

#endif //MASTERY_ERROR_H
