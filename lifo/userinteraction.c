#include "userinteraction.h"
#include <stdio.h>
#include <stdbool.h>

bool userinteration(int value){

  // Switch statement to handle different options
  switch(value) {
    case 1:
      printf("You chose Option 1.\n");
      break;
    case 2:
      printf("You chose Option 2.\n");
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
