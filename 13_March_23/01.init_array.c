#include <stdio.h>

int main() {

    //Init Pointer
    int num = 10;
    int *num_ptr = &num;

    //Printing the value of pointer or memory address o num var
    printf("Memory address of num is %u \n", num_ptr);
    //dereferencing pointer to get the value of pointer
    printf("Dereferenced value of the pointer is : %i\n", *num_ptr);


}
