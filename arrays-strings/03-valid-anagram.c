#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char* s, char* t) {
    int count[256] = {0};

    for (int i = 0; s[i] != '\0'; i++)
        count[(unsigned char)s[i]]++;

    for (int i = 0; t[i] != '\0'; i++)
        count[(unsigned char)t[i]]--;

    for (int i = 0; i < 256; i++)
        if (count[i] != 0)
            return false;

    return true;
}

int main() {
    printf("Test 1: %s\n",
           isAnagram("anagram", "nagaram") ? "true" : "false");

    printf("Test 2: %s\n",
           isAnagram("rat", "car") ? "true" : "false");

    return 0;
}