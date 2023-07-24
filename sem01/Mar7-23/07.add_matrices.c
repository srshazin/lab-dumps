#include <stdio.h>

int main(){
    int n = 3;
    int A[n][n], B[n][n], R[n][n];

    printf("Matrix A\n");
    for(int i =0; i < n ; i++){
        for (int j =0; j < n; j++){
            printf("r%i c%i: ", i+1, j+1);
            scanf("%d",  &A[i][j]);
        }
    }
    printf("Matrix B\n");
    for(int i =0; i < n ; i++){
        for (int j =0; j < n; j++){
            printf("r%i c%i: ", i+1, j+1);
            scanf("%d",  &B[i][j]);

        }
    }


    for(int i =0; i < n ; i++){
        for (int j =0; j < n; j++){
            R[i][j] = A[i][j] +  B[i][j];
        }
    }

    for(int i =0; i < n ; i++){
        for (int j =0; j < n; j++){
            printf("%d  ", R[i][j]);
        }
        printf("\n");
    }

}
