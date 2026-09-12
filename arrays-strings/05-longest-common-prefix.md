## Problem: Longest Common Prefix (Easy)

**Link:** [LeetCode Longest Common Prefix]

### Approach

I compared characters column by column using the first string as the reference. The comparison stops when a character differs or one of the strings ends.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If the strings have no characters in common at the beginning, the answer is an empty string.