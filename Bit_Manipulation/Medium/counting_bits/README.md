# Counting Bits

## Problem Link

https://leetcode.com/problems/counting-bits/

---

## Difficulty

Medium

---

## Tags

Bit Manipulation
Dynamic Programming

---

## Pattern

DP on Bits / Reuse Smaller Subproblems

---

## Intuition

We need to compute the number of set bits for every number from `0` to `n`.

A naive approach is to count bits independently for each number.
But this repeats work.

Observation:
Each number can be derived from a smaller number.

Example:

```text id="ex1"
i = 5 (101)
i >> 1 = 2 (10)
```

So:

```text id="ex2"
bits(5) = bits(2) + 1
```

---

## Example

Input:

```text id="ex3"
n = 5
```

Output:

```text id="ex4"
[0,1,1,2,1,2]
```

Explanation:

```text id="ex5"
0 → 0
1 → 1
2 → 10 → 1
3 → 11 → 2
4 → 100 → 1
5 → 101 → 2
```

---

## Approach

### Built-in Approach

* Use `__builtin_popcount(i)` for each number
* Simple but not ideal for interviews

---

### Optimal (Dynamic Programming)

* Use relation:

```text id="rel"
dp[i] = dp[i >> 1] + (i & 1)
```

Explanation:

* `i >> 1` removes last bit
* `(i & 1)` tells if last bit is 1

So we reuse previously computed results.

---

## Optimization Path

Brute Force / Built-in
O(n log n) — count bits for each number

↓

Optimal (DP)
O(n) — reuse previous results

---

## Edge Cases

* n = 0
* Large n values
* Memory constraints for large arrays

---

## Common Mistakes

* Not initializing dp[0]
* Misunderstanding bit operations (`>>`, `&`)
* Using built-in in interviews when optimization is expected

---

## Interview Explanation

Instead of computing set bits for each number independently, I use dynamic programming. The number of set bits in `i` can be derived from `i >> 1` plus the last bit. This allows computing all values in linear time.

---

## Key Insight

```text id="core"
dp[i] = dp[i >> 1] + (i & 1)
```

This converts the problem into a **reuse-based DP problem on bits**.

---

## Related Problems

* Number of 1 Bits
* Sum of Two Integers
* Power of Two
* Reverse Bits
