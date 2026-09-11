#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char test1[] = "hello";
    reverseString(test1, strlen(test1));
    printf("Test 1: %s\n", test1);

    char test2[] = "a";
    reverseString(test2, strlen(test2));
    printf("Test 2: %s\n", test2);

    return 0;
}