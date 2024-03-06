#include "userinteraction.h"
#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  bool control;
  control = true;
  
  int value;

  while (control) {
    printf("\n");
    printf("1. Initialize an Array.\n");
    printf("2. List all elements on the array.\n");
    printf("3. Pop a specific element.\n");
    printf("4. Push a specific element.\n");
    printf("9. Exit.\n");
    printf("--> Enter a valid option: \n");
    scanf("%d", &value);  
    control = userinteration(value);
  }
  
  return 0;
}
