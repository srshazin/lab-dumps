#include <stdio.h>
#define MAX_SIZE 256
int main(){
    char str[MAX_SIZE];
    printf("Enter any string : ");
    gets(str);
    int  target = 0;
    int lowest = MAX_SIZE;
    char low_char = '\0';

    for(int i =0; str[i] != '\0'; i++){
        for (int j = 0; str[j] != '\0'; j++){
            if (str[i] == str[j]){
                target++;
            }
        }
        if (target < lowest){
            lowest = target;
            low_char = str[i];
        }
        target = 0;
    }



    printf("Lowest frequency char is: %c\n", low_char);



    return 0;
}

