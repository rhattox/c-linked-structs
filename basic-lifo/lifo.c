#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void *listArray(int *arr, int *size){
  printf("\n\n");
  for(int i=0;i<*size;i++){
    printf("\n[%d]: %d",i,arr[i]);
  }
  printf("\n\n");
}

void *popLastItem(int *size){
  printf("%d", *size);
  *size = *size - 1;
  printf("%d", *size);
}

void *pushNewItem(int *arr, int *size){
  *size = *size + 1;
  printf("\nAdding a new item: ");
  scanf("%d",&arr[*size-1]);

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
  
  int *stackPtr = stack;
  int *sizePtr = &size;

  bool whileControl = true;
  while (whileControl) {
    printf("\nSelect what you want to do now: \n");
    printf("\n1. Push a new item (last) : \n");
    printf("\n2. Pop an item (last): \n");
    printf("\n3. List the array: \n");
    printf("\n0. Exit the program: \n");
    
    int switchChoice;

    scanf("%d", &switchChoice);

    switch (switchChoice) {
      case 1: 
        printf("\nPush a new Element\n");
        pushNewItem(stackPtr, sizePtr);
      break;
      case 2:
        printf("\nPop an Element\n");
        popLastItem(sizePtr);
      break;
      case 3:
        printf("\nListing the array\n");
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

