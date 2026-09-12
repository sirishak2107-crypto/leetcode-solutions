#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0)
        return "";

    int i = 0;

    while (strs[0][i] != '\0') {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != current || strs[j][i] == '\0') {
                strs[0][i] = '\0';
                return strs[0];
            }
        }

        i++;
    }

    return strs[0];
}

int main() {
    char a1[] = "flower";
    char a2[] = "flow";
    char a3[] = "flight";
    char* test1[] = {a1, a2, a3};

    printf("Test 1: %s\n", longestCommonPrefix(test1, 3));

    char b1[] = "dog";
    char b2[] = "racecar";
    char b3[] = "car";
    char* test2[] = {b1, b2, b3};

    printf("Test 2: %s\n", longestCommonPrefix(test2, 3));

    return 0;
}