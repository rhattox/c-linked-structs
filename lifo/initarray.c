#include <stdio.h>

int* initarray(int* size){
  printf("%d", *size);

  int array[*size];
  
  printf("%d", *array);
  // for (int i = 0; i < *size; i++){
  //   printf("\n");
  //   printf("Enter the %d element: ", (i+1));
  //   printf("\n");
  //   scanf("%d",&array[i]);
  // }
  // int* arrayPtr = &array[*size];
  // printf("Initialized array: %p", (void*)arrayPtr);
  //
  // for (int i = 0; i < *size; i++){
  //   printf("%d\n",array[i]);
  // }
  //
  //return arrayPtr;
  return size;
}
