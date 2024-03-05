#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
  int8_t var1 = 10;
  int8_t *var_pointer;
 
  printf("var1 initial value: %d\n",var1);

  var_pointer = &var1;
  
  *var_pointer = 100;

  printf("Pointer recieves new value\n");

  printf("var1 final value: %d\n", var1);
 
  return EXIT_SUCCESS;
}
