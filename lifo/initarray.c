#include <stdio.h>

void initarray(){
  
  int size;
  printf("What is the size of the array?\n");
  scanf("%d",&size);
  
  int array[size];

  for (int i = 0; i < size; i++){
    printf("\n");
    printf("Enter the %d element: ", (i+1));
    printf("\n");
    scanf("%d",&array[i]);
  }

}
