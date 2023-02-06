

#include <stdio.h>

void left_half_pyramid(n);

int main(void){

    int n;
    printf("Enter length: ");
    scanf("%d", &n);

    left_half_pyramid(n);


}
void left_half_pyramid(n) {

    for (int i =0; i < n; i++){
            for (int k = 0; k < n-i-1; k++){
                printf(" ");
            }
        for (int j= 0; j < i+1  ; j++){
            printf("*");
        }
        printf("\n");
    }
}
