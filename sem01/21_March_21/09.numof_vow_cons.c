#include <stdio.h>
#define MAX_SIZE 100
int main(){
    char str[MAX_SIZE];
    int vowel, consonant;
    vowel = 0; consonant = 0;
    printf("Enter any string : ");
    scanf("%s",(str));

    for(int i =0; str[i] != '\0'; i++){
        if (str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ){
            vowel++;
        }
        else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
            vowel++;
        }
        else {
            consonant++;
        }
    }

    printf("Vowles = %d\n", vowel);
    printf("Consonants = %d\n", consonant);


    return 0;
}
