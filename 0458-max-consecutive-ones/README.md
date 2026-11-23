# 485. Max Consecutive Ones

[Problem on LeetCode](https://leetcode.com/problems/max-consecutive-ones/)

## Idea
Walk through the array while keeping a running count of consecutive 1s:
- If the current value is 1, increment `counter`, then update `maxCount` if `counter` is larger.
- If the current value is 0, reset `counter` to 0.

`maxCount` remembers the longest run seen so far, so it isn't lost when `counter` resets.

## Complexity
- **Time:** O(n), since we go through the array once.
- **Space:** O(1), since we only use two integer variables, no matter how big the input is.