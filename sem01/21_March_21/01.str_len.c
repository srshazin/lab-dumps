#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256
int main(void){
    char str[MAX];
    printf("Enter a string: \n");
    scanf("%s", &str);
    int str_size = 0;

    for (int i =0; str[i] != '\0'; i++){
        str_size += 1;
    }

    printf("The size of string is %i\n", str_size);
}
