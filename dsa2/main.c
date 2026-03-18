#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void InsertionSort(int *nums, int target);

int main()
{
    int arr[] = {6,4,7,56,3,6};
    int dih = 6;
    InsertionSort(arr, dih);

    return 0;
}

void InsertionSort(int *nums, int target){
    int i, j, key;
    for (i = 1; i < target; i++){
        key = nums[i];
        for (j = i; (j > 0) && (key < nums[j - 1]); j--){
            nums[j] = nums[j - 1];
        }
        nums[j] = key;
        for (int k = 0; k < target; k++) {
            printf("%d ", nums[k]);
        }
        printf("\n");
    }
}
