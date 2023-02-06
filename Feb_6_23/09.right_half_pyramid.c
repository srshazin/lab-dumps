

#include <stdio.h>

void right_half_pyramid(n);

int main(void){

    int n;
    printf("Enter length: ");
    scanf("%d", &n);

    right_half_pyramid(n);


}
void right_half_pyramid(n) {

    for (int i =0; i < n; i++){
        for (int j= 0; j < i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}
