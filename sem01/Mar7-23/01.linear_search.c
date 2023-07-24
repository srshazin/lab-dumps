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
    int query;
    printf("Enter the number you want to search: ");
     scanf("%d", &query);
    //Linear search
    int isFound = 0;
    for (int i =0; i < n; i++){
        if (nums[i] == query){
            printf("Found a match at index: %i\n", i);
            isFound = 1;
        }
    }
    if (isFound == 0){
        printf("Not found! \n");
    }

    printf("\n");
}
