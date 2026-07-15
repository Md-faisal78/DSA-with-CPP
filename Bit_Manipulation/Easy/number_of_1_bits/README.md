# Number of 1 Bits (Hamming Weight)

## Problem Link

https://leetcode.com/problems/number-of-1-bits/

---

## Difficulty

Easy

---

## Tags

Bit Manipulation

---

## Pattern

Bitwise Reduction (Remove Rightmost Set Bit)

---

## Intuition

We need to count how many bits are set to 1 in a number.

A naive way is to check each bit individually.
A better way is to directly remove set bits one by one.

Key idea:

* `n & (n - 1)` removes the **rightmost set bit**

Example:

```text id="ex1"
n = 1100
n-1 = 1011
n & (n-1) = 1000
```

Each operation removes one set bit.

---

## Example

Input:

```text id="ex2"
n = 11 (binary: 1011)
```

Steps:

```text id="ex3"
1011 → 1010 → 1000 → 0000
```

Count = 3

Output:

```text id="ex4"
3
```

---

## Approach

### Brute Force

* Check each of the 32 bits
* Use `(n & (1 << i))` to test each bit

---

### Optimal (Brian Kernighan’s Algorithm)

* While `n != 0`:

  * Remove rightmost set bit using `n & (n - 1)`
  * Increment count
* Loop runs only for number of set bits

---

## Optimization Path

Brute Force
O(32) — check every bit

↓

Optimal
O(number of set bits) — remove one bit at a time

---

## Edge Cases

* n = 0
* n has all bits set
* Large unsigned integers

---

## Common Mistakes

* Using signed int instead of `uint32_t`
* Infinite loop if condition is wrong
* Not understanding how `n & (n - 1)` works

---

## Interview Explanation

Instead of checking all bits, I repeatedly remove the rightmost set bit using `n & (n - 1)`. Each operation reduces one set bit, so the loop runs only as many times as there are set bits.

---

## Key Insight

`n & (n - 1)` removes the **rightmost set bit**.

This reduces the problem size efficiently at each step.

---

## Related Problems

* Count Set Bits
* Power of Two
* Reverse Bits
* Single Number
