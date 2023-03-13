#include <stdio.h>
#include <stdlib.h>

int main(void){

    printf("Number of elements: ");
    int n, *nums;
    scanf("%d", &n);
    nums =  (int *)malloc(n* sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", (nums + i));
    }

    printf("Inserted array: \n");
    for (int i = 0; i < n; i++){
        printf("%d\t", *(nums + i));
    }
    //Reverse the array
    if (n%2 == 0){
        for (int i = 0; i < n/2; i++){
            int tmp = *(nums + i);
            *(nums + i) = *(nums + n - i - 1);
            *(nums + n - i  - 1) = tmp;
        }
    }else {
        for (int i = 0; i < (n-1)/2; i++){
            int tmp = *(nums + i);
            *(nums + i) = *(nums + n - i - 1);
            *(nums + n - i  - 1) = tmp;
        }
    }
    printf("\nReversed array: \n");
    for (int i = 0; i < n; i++){
        printf("%d\t", *(nums + i));
    }
    free(nums);
}
