
#include <stdio.h>

long long int fact(n);

int main(void){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %lld", n, fact(n));


}
long long int fact(n){
    long long int offset = 1;
    for (int i=n; i> 0; i--){
        offset *= i;
    }
    return offset;
}
