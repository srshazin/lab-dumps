#include <stdio.h>
#define MAX 100

int main(void){
    int n, nums[MAX];
    printf("Enter the number of items in you want to insert: ");
    scanf("%d", &n);

    //Array element insertion
    for (int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    //Sorting
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){

            if (nums[j] > nums[j+1]){
                //Swap
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    //Printing the array
    for(int i =0; i < n ; i++){
        printf("%d\t",nums[i]);
    }

    printf("\n");
}

