#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isValid(char* s) {
    int n = 0;

    while (s[n] != '\0')
        n++;

    char* stack = malloc(n * sizeof(char));
    int top = -1;

    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        } else {
            if (top == -1) {
                free(stack);
                return false;
            }

            char open = stack[top--];

            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                free(stack);
                return false;
            }
        }
    }

    bool result = (top == -1);
    free(stack);

    return result;
}

int main() {
    printf("Test 1: %s\n",
           isValid("()[]{}") ? "true" : "false");

    printf("Test 2: %s\n",
           isValid("(]") ? "true" : "false");

    return 0;
}