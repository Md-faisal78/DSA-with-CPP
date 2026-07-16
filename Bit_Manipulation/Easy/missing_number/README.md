# Missing Number

## Problem Link

https://leetcode.com/problems/missing-number/

---

## Difficulty

Easy

---

## Tags

Array
Math
Bit Manipulation

---

## Pattern

Range Mapping / XOR / Mathematical Summation

---

## Intuition

We are given `n` distinct numbers from the range `[0, n]` with one number missing.

The goal is to find that missing number.

Key observation:

* The array should contain all numbers from `0` to `n`
* Exactly one number is missing

---

## Example

Input:

```text
nums = [3, 0, 1]
```

Expected range:

```text
[0, 1, 2, 3]
```

Missing:

```text
2
```

Output:

```text
2
```

---

## Approach

### Brute Force

* For each number from `0` to `n`
* Check if it exists in the array

---

### Better (Hashing)

* Use an auxiliary array to mark presence
* First unmarked index is the answer

---

### Optimal 1 (Math - Sum Formula)

* Sum of first `n` numbers:

```text
n * (n + 1) / 2
```

* Subtract actual sum → missing number

---

### Optimal 2 (XOR)

* XOR all numbers from `0` to `n`
* XOR all elements in array
* XOR of both results gives missing number

---

## Optimization Path

Brute Force
O(n²) — check each number

↓

Better (Hashing)
O(n) — extra space

↓

Optimal (Math)
O(n) — no extra space

↓

Optimal (XOR)
O(n) — no extra space

---

## Edge Cases

* Missing number is 0
* Missing number is n
* Single element array

---

## Common Mistakes

* Forgetting range is `[0, n]` (not `[1, n]`)
* Overflow in sum formula (use long long if needed)
* Incorrect XOR initialization

---

## Interview Explanation

The array contains numbers from 0 to n with one missing. I can compute the expected sum and subtract the actual sum, or use XOR properties to cancel out matching elements and find the missing value.

---

## Key Insight

```text
X ^ X = 0
X ^ 0 = X
```

XOR cancels duplicates and leaves the missing number.

---

## Related Problems

* Find All Numbers Disappeared in an Array
* Single Number
* Missing Positive
