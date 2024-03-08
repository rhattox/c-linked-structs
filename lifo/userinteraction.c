#include "userinteraction.h"
#include "initarray.h"
#include "getsize.h"
#include "listarray.h"
#include <stdio.h>
#include <stdbool.h>

bool userinteration(int value){
  int* arrayPtr;
  int* sizePtr;

  printf("\n");
  // Switch statement to handle different options
  switch(value) {
    case 1:
      printf("You chose Option 1.\n");
      sizePtr = getsize();
      arrayPtr = initarray(sizePtr);
      break;
    case 2:
      printf("You chose Option 2.\n");
      listarray(arrayPtr);
      break;
    case 3:
      printf("You chose Option 3.\n");
      break;
    case 4:
      printf("You chose Option 4.\n");
      break;
    case 9:
      printf("Exit. \n");
      return false;

    default:
      printf("Invalid choice. Please choose a number between 1,2,3,4-9.\n");
  }

  return true;
}
