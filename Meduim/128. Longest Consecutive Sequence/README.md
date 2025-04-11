# 128. Longest Consecutivee Sequence


## Problem Definition
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

for more details check the official link in [leetcode](https://leetcode.com/problems/longest-consecutive-sequence/).

**Example1:**

**Input:** nums = [100, 4, 200, 1, 3, 2]

**Output:** 4

**Example2:**

**Input:** nums = [0,3,7,2,5,8,4,6,0,1]

**Output:** 9

**Example3:**

**Input:** nums = [1, 0, 1, 2]

**Output:** 3


## Hashset 

**Data Structure used:** Sets.

**Time Complexity:** O(N).

**Space Complecity:** O(N).

**Step-by-Step Solution Outline**

1. we will convert our list into a set so it has only distinct numbers.
2. we check all the numbers of a set we are going to check if the number is the start of the sequence by checking if the number before it exists or no if the number exists so it's not a start of a sequence.
3. when we find the start of a sequence we start checking the length of that sequence.
4. then we check if this sequence is the max or not 
5. we return the longest sequence


[**Python Solution**](Python/Solution.py)

```python
def longestConsective(nums):
    nums_set = set(nums)
    maximum = 0

    for number in nums_set:

        # to look for the beginning of the list 
        if number - 1 not in nums_set:
            actual = 1

            while number + actual in nums_set:
                actual += 1
            
            maximum = max(actual, maximum)
        

    return maximum
```

[**Scala Solution**](Scala/Solution.scala)

```scala
def longestConsecutive(nums: Array[Int]): Int = {
    var maximum = 0
    val mySet = nums.toSet

    for (elem <- mySet){
        // Try to find the beginning of the element
        if(!mySet.contains(elem-1)){
            var actual = 1

            while(mySet.contains(elem+actual)){
                actual += 1
            }

            if (maximum < actual){
                maximum = actual
            }    
        }
    }
    return maximum
}
```

[**C++ Solution**](C++/Solution.cpp)

```cpp
int longestConsecutive(vector<int>& nums) {
    set<int> mySet(nums.begin(), nums.end());
    int maximum = 0;
    for(const auto& elem : mySet){
        if (!mySet.count(elem - 1)){
            int actual = 1;
            while (mySet.count(elem + actual)){
                actual++;
            }
            if (actual > maximum){
                maximum = actual;
            }
        }
    }
    return maximum;
}
```

[**Java Solution**](Java/Solution.java)

```java
public int longestConsecutive(int[] nums) {
    Set<Integer> mySet = new HashSet<>();
    for(int num : nums){
        mySet.add(num);
    }
    int maxuimum = 0;
    for (int elem: mySet){
        if(!mySet.contains(elem-1)){
            int actual = 1;
            while(mySet.contains(elem+actual)){
                actual += 1;
            }
            if (actual > maxuimum){
                maxuimum = actual;
            }
        } 
    }
        
    return maxuimum;
}
```

