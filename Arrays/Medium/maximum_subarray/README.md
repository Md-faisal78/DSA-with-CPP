# Maximum Product Subarray in an Array

## Problem Link

https://leetcode.com/problems/maximum-product-subarray/

---

## Difficulty

Medium

---

## Tags

Array
Dynamic Programming

---

## Pattern

Subarray Enumeration + Dynamic Programming

---

## Intuition

The goal is to find a contiguous subarray with the maximum product.

Unlike sum problems, multiplication behaves differently:

* Negative numbers can flip the sign
* A large negative product can become maximum if multiplied by another negative
* Zero breaks the product chain

Because of this, simple greedy approaches fail unless we carefully track how products evolve.

---

## Example

Input:

```text
nums = [2, 3, -2, 4]
```

Subarrays and products:

```text
[2] → 2  
[2,3] → 6  
[2,3,-2] → -12  
[2,3,-2,4] → -48  

[3] → 3  
[3,-2] → -6  
[3,-2,4] → -24  

[-2] → -2  
[-2,4] → -8  

[4] → 4  
```

Output:

```text
6
```

---

## Approach

### Brute Force

* Generate all subarrays
* Compute product using nested loops
* Keep track of maximum product

---

### Optimal Approach 1 (Prefix + Suffix)

* Traverse from left and right simultaneously
* Maintain prefix and suffix products
* Reset when encountering zero
* Maximum can appear from either direction

---

### Optimal Approach 2 (Max-Min Tracking)

* Maintain:

  * maximum product ending at current index
  * minimum product ending at current index
* If current element is negative → swap max and min
* Update values dynamically

---

## Optimization Path

Brute Force
O(n²) — enumerate all subarrays and compute product

↓

Optimal (Prefix + Suffix)
O(n) — traverse from both directions

↓

Optimal (Max-Min Tracking)
O(n) — track local max and min products

---

## Edge Cases

* Array contains zero
* All negative numbers
* Single element array
* Large values causing overflow

---

## Common Mistakes

* Ignoring effect of negative numbers
* Not handling zero properly
* Using only max product (forgetting min product)
* Overflow when using int

---

## Interview Explanation

I first consider all subarrays using brute force. Then I optimize by observing that product behavior depends on sign changes. Using prefix-suffix traversal or tracking both maximum and minimum products allows solving the problem in linear time.

---

## Key Insight

Negative numbers are the key challenge.

A minimum product can become maximum after multiplication with a negative number.

This is why we must track both:

* maximum product
* minimum product

---

## Related Problems

* Maximum Subarray
* Best Time to Buy and Sell Stock
* Subarray Product Less Than K
