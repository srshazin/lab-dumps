


#include <stdio.h>

void full_pyramid(n);

int main(void){

    int n;
    printf("Enter length: ");
    scanf("%d", &n);

    full_pyramid(n);


}
void full_pyramid(n) {

   for (int i =0; i < (n+1)/2; i++){
        int space = (n-1)/2;
        for (int j= 0; j < (space - i); j++){
            printf(" ");
        }
        for (int k = 0; k < 2*(i+1)-1; k++){
            printf("*");
        }
        printf("\n");
    }
}
