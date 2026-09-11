## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a brute-force approach by checking every possible pair of numbers in the array. For each pair, I checked whether their sum was equal to the target. This approach is simple and works correctly for all valid inputs.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The solution must not use the same element twice. I also tested a duplicate-value case such as [3, 3] with target 6.