#include <stdio.h>
#define MAX_SIZE 256
int main(){
    char str[MAX_SIZE], rev_str[MAX_SIZE];
    int len = 0;
    printf("Enter any string : ");
    gets(str);
    strcpy(rev_str, str);
    for(int i =0; str[i] != '\0'; i++){
        len++;
    }


    if (len%2 == 0){
        for(int i =0; i < len/2; i++){
            char tmp = str[i];
            str[i] = str[len - i - 1];
            str[len - i - 1] = tmp;
        }
    } else {

        for(int i =0; i < (len-1)/2; i++){
            char tmp = str[i];
            str[i] = str[len - i -1];
            str[len - i - 1] = tmp;
        }
    }

    if (strcmp(rev_str, str) == 0){
        printf("String is palindrome\n");
    }
    else {
        printf("String is not palindrome\n");
    }


    return 0;
}
