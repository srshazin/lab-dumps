#include <stdio.h>

int main() {
    printf("Number of elements: ");
    int n, *nums;
    scanf("%d", &n);
    nums =  (int *)malloc(n* sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", (nums + i));
    }
    int key;
    printf("Key: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++){
        if (*(nums + i) == key){
            printf("Match found at index %i\n", i);
            return 0;
        }
    }
    printf("No Match found!");

}
