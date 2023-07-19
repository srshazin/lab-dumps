
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("How many elements do you want to add? ");
    scanf("%i", &n);
    int nums[n];
    for (int i =0; i < n; i++){
        scanf("%d",&nums[i]);
    }
    printf("Inserted array\n");
    for (int i =0; i < n; i++){
        printf("%i\t",nums[i]);
    }
    int *cp_nums = (int *)malloc(n*sizeof(int));
    for (int i = 0; i< n ; i++){
        *(cp_nums + i) = nums[i];
    }
    printf("\nCopied array\n");
    for (int i =0; i < n; i++){
        printf("%i\t",*(cp_nums +i));
    }
    free(cp_nums);
}

