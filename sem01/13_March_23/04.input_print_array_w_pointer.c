
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *nums;
    printf("How many elements do you want to add? ");
    scanf("%i", &n);
    nums =(int *)malloc(n* sizeof(int));
    for (int i =0; i < n; i++){
        scanf("%d",(nums + i));
    }
    printf("Inserted array\n");
    for (int i =0; i < n; i++){
        printf("%i\t",*(nums+i));
    }
    free(nums);
}

