# 27. Remove Element

[Problem on LeetCode](https://leetcode.com/problems/remove-element/)

## Idea
The values equal to `val` have to be removed **in place**, without a second vector. Two indexes do the work:
- `i` reads every element, from left to right.
- `k` is where the next kept value should be written, and also how many values have been kept so far.

When `nums[i]` is not `val`, copy it to `nums[k]` and move `k` forward. When it is `val`, skip it. It will be overwritten by a later kept value.

At the end, the first `k` elements of `nums` are the kept values, and `k` is returned. The rest of the array doesn't matter.

`k` never gets ahead of `i`, so writing to `nums[k]` never overwrites a value that hasn't been read yet.

## Earlier attempt
My first solution swapped each `val` with the next value that wasn't `val`, using an inner loop. It worked once I counted the kept values instead of the `val`s, but it was O(n²). Swapping isn't needed: a removed value can simply be skipped and overwritten.

## Complexity
- **Time:** O(n), since the array is scanned once.
- **Space:** O(1), since the array is changed in place and only two indexes are used.