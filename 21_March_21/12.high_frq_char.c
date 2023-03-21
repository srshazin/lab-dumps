#include <stdio.h>
#define MAX_SIZE 256
int main(){
    char str[MAX_SIZE];
    printf("Enter any string : ");
    gets(str);
    int  target, higest = 0;
    char high_char = '\0';

    for(int i =0; str[i] != '\0'; i++){
        for (int j = 0; str[j] != '\0'; j++){
            if (str[i] == str[j]){
                target++;
            }
        }
        if (target > higest){
            higest = target;
            high_char = str[i];
        }
        target = 0;
    }



    printf("Highest frequency char is: %c\n", high_char);



    return 0;
}
