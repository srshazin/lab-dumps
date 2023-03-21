#include <stdio.h>
#include <string.h>
#define MAX 256
//65-90
int main(void){
    char str1[MAX];
    printf("Enter a uppercase string: ");
    scanf("%s", &str1);

    for (int i = 0; str1[i] != '\0'; i++){

        if ((int)str1[i] >= 65 && (int)str1[i] <= 90){
            str1[i] = (char)(str1[i] + 32);
        }
    }
    printf("Lowercased string is: %s\n", str1);
}

