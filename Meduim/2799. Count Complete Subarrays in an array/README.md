# 2799. Count Complete Subarrays in an array


## Problem Definition
You are given an array nums consisting of positive integers.

We call a subarray of an array complete if the following condition is satisfied:

    - The number of distinct elements in the subarray is equal to the number of distinct elements in the whole array.

Return the number of complete subarrays.

A subarray is a contiguous non-empty part of an array.

for more details check the official link in [leetcode](https://leetcode.com/problems/count-complete-subarrays-in-an-array/description/).

**Example1:**

**Input:** nums = [1,3,1,2,2]

**Output:** 4

**Example2:**

**Input:** nums = [5,5,5,5]

**Output:** 10

## Prefix And Suffix Approach 

**Data Structure used:** Sets.

**Time Complexity:** O(N²).

**Space Complecity:** O(N).

**Step-by-Step Solution Outline**

1. We need to compte the number of distinct numbers k.
2. if we have k = 1 then : count = (n*(n+1)) / 2 for example n = 5 and k = 1 count (5*6)/2 = 15.
3. if k is bigger than 1 we are going to use Nested loops where the outer loop will loop through all the elements of the list and where the outer will extend the subarray.
4. in each iteration we add the number to the `currentset` till the currentste has the same length as k we can add all the remaining subarrays to the count `(n-j)`.


[**Python Solution**](Python/solution.py)

```python
def countCompleteSubarrays(nums) -> int:
    count = 0
    n = len(nums)
    hashset = set(nums)
    k = len(hashset)

    if k == 1:
        count = (n * (n+1)) // 2
        return count

    for i in range(n):
        current_set = set()
        for j in range(i,n):
            current_set.add(nums[j])
            if len(current_set) == k:
                count += (n-j)
                break
    
    return count

```

