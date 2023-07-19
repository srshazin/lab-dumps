#include <stdio.h>

int max(int a, int b);
int min(int a, int b);

int  main(){

    int a, b;
    printf("Number a: ");
    scanf("%d", &a);
    printf("Number b: ");
    scanf("%d", &b);
    if ( a == b){
        printf("Both are equal\n");
        return 1;
    }
    printf("Maximum is %d\n", max(a, b));
  printf("Minimum is %d\n", min(a, b));

    return 0 ;
}

int max(int a, int b){

    if ( a > b){
        return a;
    }else {

        return b;
    }

}
int min(int a, int b){

    if ( a < b){
        return a;
    }else {

        return b;
    }

}


