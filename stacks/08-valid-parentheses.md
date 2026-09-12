## Problem: Valid Parentheses (Easy)

**Link:** [LeetCode Valid Parentheses]

### Approach

I used a stack to store opening brackets. Whenever a closing bracket is encountered, it must match the most recently stored opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The order of brackets matters, so a stack is appropriate because it follows the last-in, first-out principle.