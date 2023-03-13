#include <stdio.h>
#include <stdlib.h>
int main(){
    int *num1, *num2;
    num1 = (int *)malloc(1*sizeof(int));
    num2 = (int *)malloc(1*sizeof(int));
    printf("Number 1: ");
    scanf("%d", num1);
    printf("Number 2: ");
    scanf("%d", num2);
    printf("Addition is %d\n", *num1 + *num2);
    free(num1);
    free(num2);
}
