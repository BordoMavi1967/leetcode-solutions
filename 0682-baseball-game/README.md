# 682. Baseball Game

[Problem on LeetCode](https://leetcode.com/problems/baseball-game/)

## Idea
Two lists are involved:
- `operations` is the input: the instructions, read once from start to end.
- `record` is a `vector<int>` that holds the actual scores. It works as a stack: scores are added to and removed from the end.

For each operation:
- `"+"`: push the sum of the last two scores, `record[record.size() - 1] + record[record.size() - 2]`. Note: record[record.size() - 1] is the same as record.back(), I write it this way in this particular case for the consistency of this specific operation.
- `"D"`: push double the last score, `record.back() * 2`.
- `"C"`: remove the last score with `pop_back()`.
- Anything else is a number: convert it with `stoi` and push it.

Instead of summing the record at the end, a running total `res` is updated in every case. Each pushed score is added, and for `"C"` the last score is subtracted **before** it is removed.

## Complexity
- **Time:** O(n), since each operation is handled once with constant work.
- **Space:** O(n) for the record, which can hold up to one score per operation.