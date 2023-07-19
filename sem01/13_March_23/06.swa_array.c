#include <stdio.h>
#define N 5
void swap_array(int arr1[], int arr2[]);
int main() {

    int nums[5] = {1, 3 , 5, 7, 9};
    int nums2[5] = {2, 4, 6, 8, 10};
    printf("Arrays before swap:\n");
    for (int i =0; i < 5; i++){
        printf("%i\t", nums[i]);
    }
    printf("\n");
    for (int i =0; i < 5; i++){
        printf("%i\t", nums2[i]);
    }
    swap_array(nums, nums2);
    printf("\nArrays after swap:\n");
      for (int i =0; i < 5; i++){
        printf("%i\t", nums[i]);
    }
    printf("\n");
    for (int i =0; i < 5; i++){
        printf("%i\t", nums2[i]);
    }
}

void swap_array(int arr1[], int arr2[]){
    int tmp[5];
    for (int i = 0; i < N; i++){
        tmp[i] = arr1[i];
    }

    for (int i = 0; i < N; i++){
        arr1[i] = arr2[i];
    }

     for (int i = 0; i < N; i++){
        arr2[i] = tmp[i];
    }


}
