#include <stdio.h>

int* getsize(){
  int size;
  printf("What is the size of the array?\n");
  scanf("%d",&size);
  int* sizePtr;
  sizePtr = &size;
  return sizePtr;
}

