# 1922. Count Good Numbers


## Problem Definition
A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).

for more details check the official link in [leetcode](https://leetcode.com/problems/count-good-numbers/description/).

**Example1:**

**Input:** n = 1

**Output:** 5

**Example2:**

**Input:** n = 4

**Output:** 400

**Example3:**

**Input:** n = 50

**Output:** 564908303

## Binary Exponentations

**Time Complexity:** O(log n).

**Space Complecity:** O(1).

**Step-by-Step Solution Outline**

1. We need to define a constant MOD to deal with large numbers.
2. for n-length size of a string number we have `n/2` digits in odd positions and `n-(n/2)` digits in even positions and we know for odd positions to have a good number you should have only prime numbers which are `p = 4` and for the even position we can have only even numbers which are `m = 5` so to solve this problem it's enough to calculate $5^m$ * $4^p$.
3. but this solution isn't will run in `O(n)` and we can complute this challenge using this.
4. to solve the problem in `O(log n)` we need to improve the way that we are using to count the power as demonstrated in my solution. 

[**Python Solution**](Python/Solution.py)

**pow function :**

```python
def pow(x, n):
    res = 1
    while n > 0:
        if n % 2:
            res = (res * x) % MOD
        n = n // 2
        x = (x * x) % MOD

    return res 
```

**Main function :**
```python
def countGoodNumbers(n: int) -> int:
    MOD = 10**9 + 7           
    odds = (n//2)
    even = n - (n//2)

    return (pow(5,even) * pow(4, odds)) % MOD 
```

## Similiar challanges

1. [50. pow(x,n)](https://leetcode.com/problems/powx-n/)