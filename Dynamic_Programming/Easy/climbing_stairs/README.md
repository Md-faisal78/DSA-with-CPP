# Climbing Stairs

## Problem Link

https://leetcode.com/problems/climbing-stairs/

---

## Difficulty

Easy

---

## Tags

Dynamic Programming

---

## Pattern

Fibonacci / 1D DP

---

## Intuition

At each step, you can climb:

* 1 step
* 2 steps

So, the total ways to reach step `n` is:

* ways to reach `n-1`
* plus ways to reach `n-2`

---

## Example

Input:

```
n = 3
```

Explanation:

```
1 + 1 + 1
1 + 2
2 + 1
```

Output:

```
3
```

---

## Approach

### DP (Tabulation)

* Define `dp[i]` = number of ways to reach step `i`
* Transition:

```
dp[i] = dp[i-1] + dp[i-2]
```

---

### Optimal (Space Optimized)

* Only last two values are needed
* Use two variables instead of array

---

## Optimization Path

DP Array
O(n) space

↓

Space Optimized
O(1) space

---

## Edge Cases

* n = 0
* n = 1
* Small values

---

## Common Mistakes

* Wrong base cases
* Starting loop from wrong index
* Forgetting n=0 case

---

## Interview Explanation

This is a classic DP problem similar to Fibonacci. Each state depends on the previous two states, so I can either use a DP array or optimize space using two variables.

---

## Key Insight

```
dp[i] = dp[i-1] + dp[i-2]
```

---

## Related Problems

* Fibonacci Number
* House Robber
* Min Cost Climbing Stairs
