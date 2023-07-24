
#include <stdio.h>

int main(){
    int n = 3;
    int A[n][n];
    printf("Matrix A\n");
    for(int i =0; i < n ; i++){
        for (int j =0; j < n; j++){
            printf("r%i c%i: ", i+1, j+1);
            scanf("%d",  &A[i][j]);
        }
    }


    //Swapping values of corner values.
    int temp1 = A[0][0];
    A[0][0] = A[0][n-1];
    A[0][n-1] = temp1;
    //Swapping the corner values of last row
    int temp2 = A[n-1][0];
    A[n-1][0] =  A[n-1][n-1];
    A[n-1][n-1] = temp2;



    for(int i =0; i < n ; i++){
        for (int j =0; j < n; j++){
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

}


