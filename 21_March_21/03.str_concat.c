#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256
int main(void){
    char str1[MAX], str2[MAX];
    printf("Enter string 1:");
    scanf("%s", &str1);
    printf("Enter string 2:");
    scanf("%s", &str2);
    strcat(str1, str2);
    printf("Concatenated String is: %s\n", str1);
}
