
/** This file contains all the logic required for io, file-related or otherwise.
 *  Since, this file only contains macros currently, it has not been necessary
 *  to import stdlib.
 *
 *  Author: Jose Fernando Lopez Fernandez
 *  Date:   15-September-2017
 *
 */

#ifndef MASTERY_IO_H
#define MASTERY_IO_H

/** In this function, the getchar() function call essentially serves as a flush
 *  on the input buffer so that the new line character left over from scanf does
 *  not impede I/O during program execution.
 *
 */

#define READ_INTEGER(n) scanf("%i", &n); \
                        getchar();


// Saving progress to file
#define OPEN_OUTPUT_FILE(filename) FILE* saveFile = fopen(filename, "w+");
#define SAVE_TO_FILE(strTime) fprintf(saveFile, "%s %f\n", strTime, 1.1);

#define SAVE_PROGRESS(fname, strTime) OPEN_OUTPUT_FILE(fname) \
                                      SAVE_TO_FILE(strTime)   \
                                      CLOSE_OUTPUT_BUFFER(fname)

#define SAVE_PROGRAM_DATA FILE* programData = fopen("mastery.dat", "w");
#define SAVE_PROGRESS_DATA(timeStruct) fprintf(programData, "%i %i %i %i %i %i %i %i %i \n", \
                                       timeStruct->tm_sec,                                   \
                                       timeStruct->tm_min,                                   \
                                       timeStruct->tm_hour,                                  \
                                       timeStruct->tm_mday,                                  \
                                       timeStruct->tm_mon,                                   \
                                       timeStruct->tm_year,                                  \
                                       timeStruct->tm_wday,                                  \
                                       timeStruct->tm_yday,                                  \
                                       timeStruct->tm_isdst);

// Loading progress from file
// ...


#define CLOSE_OUTPUT_BUFFER(filename) fclose(filename);
#define CLOSE_PROGRAM_DATA_BUFFER CLOSE_OUTPUT_BUFFER(programData)

#endif //MASTERY_IO_H
