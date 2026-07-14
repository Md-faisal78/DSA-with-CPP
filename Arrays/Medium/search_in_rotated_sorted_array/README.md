# Search in Rotated Sorted Array

## Problem Link

https://leetcode.com/problems/search-in-rotated-sorted-array/

---

## Difficulty

Medium

---

## Tags

Array
Binary Search

---

## Pattern

Modified Binary Search on Rotated Array

---

## Intuition

The array is sorted but rotated at some pivot.

Example:
[0,1,2,4,5,6,7] → rotated → [4,5,6,7,0,1,2]

Key idea:

* At any point, **one half of the array is always sorted**
* We can use this property to decide which half to discard
* This allows binary search even though the array is not fully sorted

---

## Example

Input:

```text
nums = [4,5,6,7,0,1,2], target = 0
```

Steps:

```text
low = 0, high = 6

mid = 3 → nums[mid] = 7
Left half [4,5,6,7] is sorted

Target 0 not in [4,7]
→ search right half

low = 4, high = 6

mid = 5 → nums[mid] = 1
Right half [1,2] is sorted

Target 0 not in [1,2]
→ search left half

low = 4, high = 4

mid = 4 → nums[mid] = 0 → found
```

Output:

```text
4
```

---

## Approach

### Brute Force

* Traverse entire array
* Return index if found

---

### Optimal (Binary Search)

* Use `low`, `high`, `mid`
* At each step:

  * Identify which half is sorted
  * Check if target lies in that half
  * Otherwise, search the other half

---

## Optimization Path

Brute Force
O(n) — linear scan

↓

Optimal (Binary Search)
O(log n) — discard half each step

---

## Edge Cases

* Target not present
* Single element array
* Array not rotated
* Target at boundaries

---

## Common Mistakes

* Not checking which half is sorted
* Wrong condition boundaries (`<=` vs `<`)
* Infinite loop due to incorrect updates
* Using `(low + high)/2` instead of safe mid calculation

---

## Interview Explanation

Even though the array is rotated, one half is always sorted. By identifying the sorted half and checking whether the target lies within it, I can discard half of the search space each time, achieving O(log n) complexity.

---

## Key Insight

The array is not fully sorted, but **partially sorted in halves**.

This allows binary search by deciding which half is valid at each step.

---

## Related Problems

* Minimum in Rotated Sorted Array
* Search in Rotated Sorted Array II
* Find Peak Element
