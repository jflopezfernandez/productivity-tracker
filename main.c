
// FUTURE FEATURE: Graphical User Interface (GUI)

#include "includes/numeric.h"
#include "includes/stdlib.h"
#include "includes/error.h"
#include "includes/io.h"


int main()
{
  /** AskWhetherToLoadFromFile();
   *      FUTURE FEATURE: User may pass file path/name and activity through CLI
   *  if yes, read from file into..?
   *    a. time_t
   *    b. struct tm*
   *  else, start from zero
   *  get start time and go idle
   *  -user may ask for elapsed time
   *  when the user is finished working, they terminate the program,
   *      we calculate the amount of work done using difftime(end,start)
   *  ask if we should save to file
   *  if yes,
   *    a. open file buffer
   *    b. save to file
   *  else, ask whether to go again
   *  if yes,
   *    a. restart
   *  else, exit
   *
   */

  int userSelection = UNINITIALIZED;
  printf("Would you like to load previous progress from a file? \n");
  READ_INTEGER(userSelection)

  switch (userSelection) {
    case (YES):
      printf("[Load from file...] \n");
      break;

    case (NO):
      printf("Starting brand new progress counter... \n");
      break;

    default:
      PRINT("Invalid option entered.", INVALID_USER_INPUT)
  }

  printf("Would you like to save your progress? ");
  READ_INTEGER(userSelection)

  //time_t timeVal = time(NULL);
  //time_t* timePtr = &timeVal;
  //sTime userProgress = localtime(timePtr);

  TIME_T_TO_STRUCT(timeVal,userProgress)

  SAVE_PROGRAM_DATA
  SAVE_PROGRESS_DATA(userProgress)
  CLOSE_PROGRAM_DATA_BUFFER


  return (EXIT_SUCCESS);
}