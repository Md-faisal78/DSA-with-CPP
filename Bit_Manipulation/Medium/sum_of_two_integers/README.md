# Sum of Two Integers

## Problem Link

https://leetcode.com/problems/sum-of-two-integers/

---

## Difficulty

Medium

---

## Tags

Bit Manipulation
Math

---

## Pattern

Bitwise Simulation of Addition

---

## Intuition

We need to add two integers without using `+` or `-`.

Binary addition works using:

* XOR for sum without carry
* AND + shift for carry

Example:

* 1 + 1 → sum = 0, carry = 1
* Carry is added in the next step

So we simulate this process using bit operations.

---

## Example

Input:

```text id="exa1"
a = 5 (101)
b = 3 (011)
```

Steps:

```text id="exa2"
Iteration 1:
a ^ b = 110 (6)
(a & b) << 1 = 010 (2)

Iteration 2:
a = 6, b = 2

a ^ b = 100 (4)
(a & b) << 1 = 100 (4)

Iteration 3:
a = 4, b = 4

a ^ b = 000 (0)
(a & b) << 1 = 1000 (8)

Iteration 4:
a = 0, b = 8

a ^ b = 1000 (8)
carry = 0

Result = 8
```

Output:

```text id="exa3"
8
```

---

## Approach

### Brute Force

* Directly return `a + b`
* Not allowed in constraints but useful for baseline

---

### Optimal (Bit Manipulation)

* Use XOR (`^`) → sum without carry
* Use AND (`&`) + left shift → carry
* Repeat until carry becomes zero

---

## Optimization Path

Brute Force
O(1) — direct addition

↓

Optimal (Bit Manipulation)
O(1) — fixed number of bit operations

---

## Edge Cases

* Negative numbers
* Large integers
* Overflow behavior (handled via bit operations)

---

## Common Mistakes

* Not casting to unsigned before shifting (causes undefined behavior)
* Confusing XOR with OR
* Forgetting loop termination condition (`b != 0`)

---

## Interview Explanation

I simulate binary addition using bit operations. XOR gives the sum without carry, and AND followed by a left shift gives the carry. I repeat this until there is no carry left.

---

## Key Insight

Addition can be broken into:

* sum without carry (XOR)
* carry (AND + shift)

Repeating this process mimics how binary addition works.

---

## Related Problems

* Add Binary
* Number of 1 Bits
* Reverse Bits
