# Word Break

## Problem Link

https://leetcode.com/problems/word-break/

---

## Difficulty

Medium

---

## Tags

Dynamic Programming
String

---

## Pattern

DP on Strings / Partitioning

---

## Intuition

We need to check if a string can be segmented into valid dictionary words.

Key idea:

* Try breaking the string at every possible index
* Check if left part is valid and right part can also be formed

---

## Example

Input:

```text
s = "leetcode"
wordDict = ["leet", "code"]
```

Explanation:

```text
"leet" + "code"
```

Output:

```text
true
```

---

## Approach

### Brute Force (Recursion)

* Try all possible splits
* Check if prefix is in dictionary
* Recursively solve remaining string

---

### Optimal (Dynamic Programming)

Define:

```text
dp[i] = true if substring s[0...i-1] can be formed
```

Transition:

* For each `i`, check all `j < i`
* If:

```text
dp[j] == true AND s[j...i-1] exists in dictionary
```

→ then `dp[i] = true`

---

## Optimization Path

Brute Force
Exponential — try all partitions

↓

DP
O(n²) — reuse results

---

## Edge Cases

* Empty string
* No valid segmentation
* Repeated words
* Large dictionary

---

## Common Mistakes

* Not using hash set for dictionary lookup
* Wrong substring boundaries
* Missing base case `dp[0] = true`
* Forgetting to break early after match

---

## Interview Explanation

I treat this as a partition problem. At each index, I check if there exists a previous index where the substring is valid and the prefix is also valid. Using DP avoids recomputing overlapping subproblems.

---

## Key Insight

```text
dp[i] = true if ∃ j < i such that dp[j] == true and s[j:i] ∈ dict
```

---

## Related Problems

* Word Break II
* Partition Equal Subset Sum
* Palindrome Partitioning
