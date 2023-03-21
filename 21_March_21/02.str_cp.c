#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256
int main(void){
    char str[MAX];
    printf("Enter a string: \n");
    scanf("%s", &str);
    char  str2[MAX];

    printf("Content of Main String: %s\n", str);
    strcpy(str2, str);
    printf("Content of str2 after strcpy: %s\n", str2);
}
