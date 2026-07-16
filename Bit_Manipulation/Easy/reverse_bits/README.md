# Reverse Bits

## Problem Link

https://leetcode.com/problems/reverse-bits/

---

## Difficulty

Easy

---

## Tags

Bit Manipulation

---

## Pattern

Bitwise Construction / Bit Reversal

---

## Intuition

We need to reverse the bits of a 32-bit unsigned integer.

Example:

```text id="ex1"
00000010100101000001111010011100
```

Reversed:

```text id="ex2"
00111001011110000010100101000000
```

Key idea:

* Extract bits from right (LSB)
* Build result from left (MSB)

---

## Example

Input:

```text id="ex3"
n = 43261596
```

Output:

```text id="ex4"
964176192
```

---

## Approach

### Brute Force

* Convert number to binary string
* Reverse the string
* Convert back to integer

---

### Optimal (Bit Manipulation)

* Initialize result = 0
* Loop 32 times:

  * Shift result left
  * Add last bit of n (`n & 1`)
  * Shift n right

---

## Optimization Path

Brute Force
O(32) — string conversion + reverse

↓

Optimal
O(32) — direct bit manipulation

---

## Edge Cases

* n = 0
* All bits set
* Leading zeros must be preserved

---

## Common Mistakes

* Ignoring leading zeros
* Using signed int instead of `uint32_t`
* Not looping exactly 32 times

---

## Interview Explanation

I extract bits from the least significant side and construct the reversed number by shifting and inserting bits. This simulates reversing the binary representation in O(1) time since the number of bits is fixed.

---

## Key Insight

```text id="core"
result = (result << 1) | (n & 1)
```

This shifts result and appends the last bit of n.

---

## Related Problems

* Number of 1 Bits
* Counting Bits
* Reverse Integer
