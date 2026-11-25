# 1299. Replace Elements with Greatest Element on Right Side

[Problem on LeetCode](https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/)

## Idea
Loop through the array from **right to left**, keeping the largest value seen so far in `maxRight`, which starts at -1.

For each position `i`:
- Save `arr[i]` in `current`, since it is about to be overwritten.
- Replace `arr[i]` with `maxRight`.
- If `current` is bigger than `maxRight`, update `maxRight`.

Going backwards means every element to the right of `i` has already been seen, so there's no need to search for the largest one. Starting `maxRight` at -1 makes the last element become -1 without a special case.

## Complexity
- **Time:** O(n), since the array is scanned once.
- **Space:** O(1), since the array is changed in place and only two extra variables are used.