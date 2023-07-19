#include <stdio.h>

char isEvenpOrOdd(n){

    return n%2==0?'e':'o';
}

int main(void){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isEvenpOrOdd(n) == 'e'){
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }


}
