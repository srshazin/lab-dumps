


#include <stdio.h>

void rev_right_half_pyramid(n);

int main(void){

    int n;
    printf("Enter length: ");
    scanf("%d", &n);

    rev_right_half_pyramid(n);


}
void rev_right_half_pyramid(n) {

    for (int i =0; i < n; i++){
        for (int j= n; j > i; j--){
            printf("*");
        }
        printf("\n");
    }
}
