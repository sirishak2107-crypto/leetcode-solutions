#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int position = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[position];
            nums[position] = nums[i];
            nums[i] = temp;
            position++;
        }
    }
}

void printArray(int* nums, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);

    printf("\n");
}

int main() {
    int test1[] = {0, 1, 0, 3, 12};
    moveZeroes(test1, 5);
    printf("Test 1: ");
    printArray(test1, 5);

    int test2[] = {0};
    moveZeroes(test2, 1);
    printf("Test 2: ");
    printArray(test2, 1);

    return 0;
}