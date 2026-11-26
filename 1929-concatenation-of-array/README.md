# 1929. Concatenation of Array

[Problem on LeetCode](https://leetcode.com/problems/concatenation-of-array/)

## Idea
Create a new vector `twiceNums` with room for `2 * n` elements, where `n` is the size of `nums`.

Loop through `nums` once. For each index `i`, copy `nums[i]` into both halves of the result:
- `twiceNums[i]` for the first half.
- `twiceNums[i + n]` for the second half.

Creating the vector at its full size up front means every index already exists, so both positions can be written directly in the same step.

## Complexity
- **Time:** O(n), since `nums` is scanned once. This is the best possible, because all 2n elements of the output have to be written.
- **Space:** O(n) for the result vector, which the problem requires. No extra memory is used beyond the answer.