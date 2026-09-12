## Problem: Move Zeroes (Easy)

**Link:** [LeetCode Move Zeroes]

### Approach

I used a position pointer to keep track of where the next non-zero value should go. Each non-zero element is moved toward the beginning while zeroes naturally remain toward the end.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the original array in place.