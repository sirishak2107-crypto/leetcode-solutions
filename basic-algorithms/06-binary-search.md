## Problem: Binary Search (Easy)

**Link:** [LeetCode Binary Search]

### Approach

I used binary search because the input array is sorted. At every step, I compare the target with the middle element and eliminate half of the remaining search range.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The array must be sorted for binary search to work correctly.