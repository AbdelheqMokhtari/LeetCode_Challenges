# 238. Product of Array Except Self


## Problem Definition
Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`. 

You must write an algorithm that runs in `O(n)` time and without using the division operation.

for more details check the official link in [leetcode](https://leetcode.com/problems/product-of-array-except-self/description/).

**Example1:**

**Input:** nums = [1,2,3,4]

**Output:** [24,12,8,6]

**Example2:**

**Input:** nums = [-1,1,0,-3,3]

**Output:** [0,0,9,0,0]

## Prefix And Suffix Approach 

**Data Structure used:** Arrays.

**Time Complexity:** O(N).

**Space Complecity:** O(N).

**Step-by-Step Solution Outline**

1. we are going to use suffix and prefix approach were suffix and prefix are two new arrays of size n-1 where n is the length of nums list where `ans[i] = prefix[i-1] * suffix [i+1]` 
2. to calculate prefix is the multiplication of the number in nums in ascending way and the suffix is the multiplication of them in a descending way  
3. using the example 1 we get `prefix = [1,2,6]` and `suffix = [24,12,4]` then we apply the formula `ans[i] = prefix[i-1] * suffix [i+1]`  to get `ans = [24, 12, 8, 6]`.
4. just to handle the out bound exception for the last and the first element of the list we need to do it manually


[**Python Solution**](Python/solution.py)

```python
def productExceptSelf(nums):
    n = len(nums)
    ans = [0] * n
    suffix = [0] * (n - 1)
    prefix = [0] * (n - 1)

    prefix[0] = nums[0]
    
    suffix[-1] = nums[-1]
    print(prefix[2])
    for i in range(1,(n-1)):
        prefix[i] = prefix[i-1] * nums [i]
        suffix[-i-1] = suffix [-i] * nums [-i-1]
    
    ans[0] = suffix[0]
    ans[-1] = prefix[n-2]

    for i in range(1, (n-1)):
        ans[i] = prefix[i-1] * suffix[i]
    
    return ans

```

[**Scala Solution**](Scala/solution.scala)

```scala
def productExceptSelf(nums: Array[Int]): Array[Int] = {
    val n = nums.length;
    val ans = new Array[Int](n)
    val preffix = new Array[Int](n-1)
    val suffix = new Array[Int](n-1)

    preffix(0) = nums(0)
    suffix(n-2) = nums(n-1)

    for (i <- 1 until (n-1)){
        preffix(i) = preffix(i-1) * nums (i)
        suffix(n-i-2) = suffix (n-i-1) * nums (n-i-1)
    }

    ans(0) = suffix(0)
    ans(n-1) = preffix(n-2)

    for (i <- 1 until (n-1)){
        ans(i) = preffix(i-1) * suffix(i)
    }

    return ans
}

```

