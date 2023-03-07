
#include <stdio.h>
#define MAX 100

void sortAsc(int arr[], int arrSize);
void sortDsc(int arr[], int arrSize);

int main(void){
    int n, nums[MAX];
    printf("Enter the number of items in you want to insert: ");
    scanf("%d", &n);

    //Array element insertion
    for (int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    int evenNums[MAX];
    int oddNums[MAX];
    int lastInsertedIndexes[] = {0, 0};
    int isEvenFound = 0;
    int isOddFound = 0;
    int totalEven = 0;
    int totalOdd = 0;
    for (int i =0; i< n; i++){
        if (nums[i]%2==0){
            //Even
            if (isEvenFound == 1){
                evenNums[lastInsertedIndexes[0]] = nums[i];
                totalEven += 1;
                lastInsertedIndexes[0] += 1;

            }else {
                evenNums[0] = nums[i];
                isEvenFound = 1;
                totalEven++;
                lastInsertedIndexes[0] += 1;
            }
        }else {
            if (isOddFound == 1){
                oddNums[lastInsertedIndexes[1]] = nums[i];
                totalOdd++;
                lastInsertedIndexes[1] += 1;

            }else {
                oddNums[0] = nums[i];
                isOddFound = 1;
                lastInsertedIndexes[1] += 1;
                totalOdd++;
            }
        }
    }
     for(int i =0; i < totalEven ; i++){
        printf("%d\t",evenNums[i]);
     }
     printf("\n");
      for(int i =0; i < totalOdd ; i++){
        printf("%d\t",oddNums[i]);
     }
      printf("\n");

    printf("Even numbers ordered: \n");
    sortAsc(evenNums, totalEven);
    sortDsc(evenNums,totalEven);
    printf("Odd numbers ordered: \n");
    sortAsc(oddNums, totalOdd);
    sortDsc(oddNums, totalOdd);




    printf("\n");
}

void sortAsc(int nums[], int arrSize){
     //Sorting
    for (int i = 0; i < arrSize; i++){
        for (int j = 0; j < arrSize-i-1; j++){

            if (nums[j] > nums[j+1]){
                //Swap
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    for(int i =0; i < arrSize ; i++){
        printf("%d\t",nums[i]);
    }
    printf("\n");

}
void sortDsc(int nums[], int arrSize){
     //Sorting
    for (int i = 0; i < arrSize; i++){
        for (int j = 0; j < arrSize-i-1; j++){

            if (nums[j] < nums[j+1]){
                //Swap
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    for(int i =0; i < arrSize ; i++){
        printf("%d\t",nums[i]);
    }
    printf("\n");
}
