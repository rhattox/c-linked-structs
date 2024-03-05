#include <stdlib.h>
#include <stdio.h>

void pop(int *size){

  printf("Size before pop: %d\n", *size);

  if (*size > 0){
    (*size)--;
  }

  printf("Size after pop: %d\n", *size);
}

void push(int *size, int *array, int element){
 
  printf("Size before push: %d\n", *size);

  (*size)++;

  printf("Size after push %d\n", *size);

  array[(*size)-1] = element;

   for (int i = 0; i < *size; i++) {
    printf("%d ", array[i]);
  }

}

int main(){
  int array[] = {11, 22, 33, 44, 55};
  int size = sizeof(array) / sizeof(array[0]);
  
  printf("Original Size: %d",size);
  printf("\n");
  printf("Original array:\n");
  
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  
  printf("\n");

  // Pop the last element
  pop(&size);

  printf("Array after popping the last element:\n");
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  push(&size,array,66);
  
  
  return EXIT_SUCCESS;
}
