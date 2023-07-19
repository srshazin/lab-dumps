#include <stdio.h>
#include <string.h>
#define MAX 256
int main(void){
    char str1[MAX], str2[MAX];
    printf("Enter string 1: ");
    scanf("%s", &str1);
    printf("Enter string 2: ");
    scanf("%s", &str2);
    if (strcmp(str1, str2) == 0){
        printf("The strings match! \n");
    }
    else {
        printf("The strings does not match :| \n");
    }
}
