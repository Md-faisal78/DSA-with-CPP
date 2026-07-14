# Minimum in Rotated Sorted Array

## Problem Link

https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

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

The array is originally sorted but rotated at some pivot.

Example:
[0,1,2,4,5,6,7] → rotated → [4,5,6,7,0,1,2]

Key observations:

* One half of the array is always sorted
* The minimum element lies in the **unsorted part**
* If the array is already sorted → first element is the answer

---

## Example

Input:

```text
nums = [4, 5, 6, 7, 0, 1, 2]
```

Steps:

```text
low = 0, high = 6

mid = 3 → nums[mid] = 7, nums[high] = 2
7 > 2 → minimum in right half → low = mid + 1

low = 4, high = 6

mid = 5 → nums[mid] = 1, nums[high] = 2
1 <= 2 → minimum in left half → high = mid

low = 4, high = 5

mid = 4 → nums[mid] = 0, nums[high] = 1
0 <= 1 → high = mid

low == high → answer = nums[4] = 0
```

Output:

```text
0
```

---

## Approach

### Brute Force

* Traverse entire array
* Track minimum value

---

### Optimal (Binary Search)

* Use two pointers: `low`, `high`
* Compute `mid`
* Compare `nums[mid]` with `nums[high]`

Decision:

* If `nums[mid] > nums[high]` → minimum is in right half
* Else → minimum is in left half (including mid)

---

## Optimization Path

Brute Force
O(n) — linear scan

↓

Optimal (Binary Search)
O(log n) — discard half each step

---

## Edge Cases

* Array not rotated (already sorted)
* Single element array
* Minimum at index 0
* Minimum at last index

---

## Common Mistakes

* Comparing with `nums[low]` instead of `nums[high]`
* Incorrect loop condition (`low <= high` instead of `low < high`)
* Skipping mid when it could be the answer
* Not handling already sorted array implicitly

---

## Interview Explanation

The array is sorted but rotated, so one half is always sorted. By comparing the middle element with the rightmost element, I can determine which half contains the minimum and discard the other half, achieving O(log n) time.

---

## Key Insight

The minimum element always lies in the **unsorted half** of the array.

Comparing `mid` with `high` helps identify that half efficiently.

---

## Related Problems

* Search in Rotated Sorted Array
* Find Peak Element
* First and Last Position of Element in Sorted Array
