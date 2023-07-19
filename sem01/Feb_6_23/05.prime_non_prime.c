#include <stdio.h>

char isPrimeOrNot(n);

int main(void){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrimeOrNot(n) == 'p'){
        printf("Number is Prime\n");
    } else {
        printf("Number is Non-Prime\n");
    }


}
char isPrimeOrNot(n){

    int prime = 1;
    if (n !=2 && n !=3 && n!=5 && n!= 7){

        if (n %2 ==0 || n%3 == 0 || n%5 == 0 || n%7 == 0){
            return 'n';
        }else {

            return 'p';
        }
    }
    else {
        return 'p';
    }
}
