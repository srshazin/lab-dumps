#include <stdio.h>
#include <string.h>
#define MAX 256
int main(void){
    char str1[MAX];
    printf("Enter a lowercase string: ");
    scanf("%s", &str1);

    for (int i = 0; str1[i] != '\0'; i++){

        if (str1[i] >= 97 && (int)str1[i] <= 122){
            str1[i] = (char)(str1[i] - 32);
        }
    }
    printf("Uppercased string is: %s\n", str1);
}

