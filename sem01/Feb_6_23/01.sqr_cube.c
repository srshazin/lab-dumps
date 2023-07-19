#include <stdio.h>

long int sqr(num){
   return num*num;
}

long int cube(num){
   return num*num*num;
}

int  main(){

    int n;
    printf("Insert a number: ");
    scanf("%d", &n);
    printf("Square is %ld\n", sqr(n));
    printf("Cube is %ld", cube(n));
}
