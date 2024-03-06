#include <stdlib.h>
#include <stdio.h>

void printStack(int *array, int *size){
  for (int i = 0 ; i < *size ; i ++){
    printf("%d ",array[i]);
  }

}

void push(int *array, int *size, int value){
  // Increments 
  (*size)++;
  
  array[(*size)-1] = value;

}


int main(int argc, char *argv[])
{
  printf("Last In, First Out!\n");

  printf("Enter the size: ");

  int size;

  scanf("%d", &size);

  printf("Array lenght: %d\n",size);

  int array[size]; 

  for (int i = 0 ; i < size ; i ++){
    printf("\nEnter the [%d] element: ", i+1);
    scanf("%d", &array[i]);
  }
 
  printf("\n");
  printStack(array, &size);

  printf("\nEnter a new value to the array: ");
  int value;
  scanf("%d", &value);
  
  push(array,&size,value);
  printf("\n");
  printStack(array, &size);

  return EXIT_SUCCESS;
}
