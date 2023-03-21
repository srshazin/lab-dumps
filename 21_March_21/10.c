#include <stdio.h>
#define MAX_SIZE 100
int main(){
    char str[MAX_SIZE];
    int words = 0;
    printf("Enter any string : ");
    gets(str);

    for(int i =0; str[i] != '\0'; i++){
        if (str[i] == ' '){
            words++;
        }
    }

    printf("Number of Total Words = %d\n", words);
    getchar();


    return 0;
}
