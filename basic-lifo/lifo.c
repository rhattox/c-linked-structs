#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* pushNewItem(int* arr, int* size){
  printf("\nThis is the size %d", *size);
  *size = *size + 1;
  printf("\nAdding a new item: ");
  scanf("%d",&arr[*size-1]);

  for(int i=0;i<*size;i++){
    printf("\n\n");
    printf("[%d]: %d",i,arr[i]);
  }
  return arr;
}

int main(int argc, char *argv[])
{
  printf("\nStarting...\n");

  int size;

  printf("\nWhat is the size of the array?\n");
  scanf("%d",&size);
  
  int stack[size];

  for(int i=0;i<size;i++){
    printf("\n\tWhat is the [%d]: ",i);
    scanf("%d",&stack[i]);
  }

  for(int i=0;i<size;i++){
    printf("\n[%d]: %d",i,stack[i]);
  }
  
  int* stackPtr = stack;
  int* sizePtr = &size;

  bool whileControl = true;
  while (whileControl) {
    printf("\nSelect what you want to do now: \n");

    int switchChoice;

    scanf("%d", &switchChoice);

    switch (switchChoice) {
      case 1: 
        printf("\nPush a new Element");
        pushNewItem(stackPtr,  sizePtr);
      break;
      case 2:
        printf("Pop an Element");
      break;
      case 3:
        printf("Check a new pool");
      break;
      case 0:
        whileControl = false;
      break;
      default:
        printf("Not a valid choice!");

    }
  }

  return EXIT_SUCCESS;
}

