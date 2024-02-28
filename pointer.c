#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) { 
  int8_t var1 = 10;
  int8_t *var_pointer;
 
  printf("var1: %d\n",var1);

  var_pointer = &var1;
  
  printf("var_pointer: %p\n",var_pointer);

  *var_pointer = 100;

  printf("var1: %d\n", var1);
 
  return EXIT_SUCCESS; 
}
