#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void *listArray(int *arr, int *size){
  printf("\n\n");
  if (*size <= 0){
    printf("Please, initialize the array!");
  }
  else {
    for(int i=0;i<*size;i++){
      printf("\n[%d]: %d",i,arr[i]);
    }
  }
  printf("\n\n");
}

void *popLastItem(int *size){
  if(*size > 0){
    printf("\nCurrent Size: %d", *size);
    *size = *size - 1;
  }
  if (*size == 0){
    printf("\nCurrent Size is: %d, please, push new element!", *size);

  }
}

void *pushNewItem(int *arr, int *size){
  *size = *size + 1;
  printf("\nAdding a new item: ");
  scanf("%d",&arr[*size-1]);

}

int main(int argc, char *argv[])
{
  printf("<===================================>");
  printf("\nStarting...\n");

  int size;

  printf("<===================================>");
  printf("\nWhat is the size of the array?\n");
  printf("$ ");
  scanf("%d",&size);
  
  int stack[size];

  for(int i=0;i<size;i++){
    printf("\n\t Enter the element [%d]: ",i);
    scanf("%d",&stack[i]);
  }

  printf("<===================================>");
  printf("\n");
  printf("Here is the current array: ");
  for(int i=0;i<size;i++){
    printf("\n[%d]: %d",i,stack[i]);
  }
  printf("\n");
  
  int *stackPtr = stack;
  int *sizePtr = &size;

  bool whileControl = true;
  while (whileControl) {
    printf("<===================================>");
    printf("\nSelect what you want to do now: \n");
    printf("\n1. Push a new item (last) : \n");
    printf("\n2. Pop an item (last): \n");
    printf("\n3. List the array: \n");
    printf("\n0. Exit the program: \n");
    printf("<===================================>");

    int switchChoice;

    printf("\n");
    printf("$ ");
    scanf("%d", &switchChoice);
    printf("<===================================>");
    
    switch (switchChoice) {
      case 1: 
        pushNewItem(stackPtr, sizePtr);
      break;
      case 2:
        popLastItem(sizePtr);
      break;
      case 3:
        listArray(stackPtr, sizePtr);
      break;
      case 0:
        printf("\n\nExit the program\n\nbye!\n\n");
        whileControl = false;
      break;
      default:
        printf("\nNot a valid choice!\n");

    }
  }

  return EXIT_SUCCESS;
}

