
#include <stdio.h>
#include <stdlib.h>
void swap(int *x, int *y);
int main(){
    int num1,num2;
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number before swapping:\nNumber 1: %i\nNumber 2: %i\n", num1, num2);
    swap(&num1, &num2);
    printf("Number after swapping:\nNumber 1: %i\nNumber 2: %i", num1, num2);
}
void swap(int *x, int *y){
    int tmp  = *x;
    *x = *y;
    *y = tmp;
}
