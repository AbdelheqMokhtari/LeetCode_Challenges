# 128. 680. Valid Palindrome II


## Problem Definition
Given a string s, return true if the s can be palindrome after deleting at most one character from it.

for more details check the official link in [leetcode](https://leetcode.com/problems/valid-palindrome-ii/).

**Example1:**

**Input:** s = "aba"

**Output:** true

**Example2:**

**Input:** s = "abca"

**Output:** true

**Example3:**

**Input:** s = "abc"

**Output:** false


## Two Pointers approach (Running from both ends of an array)

**Data Structure used:** Strings.

**Time Complexity:** O(N).

**Space Complecity:** O(1).

**Step-by-Step Solution Outline**

This problem is classified as an easy problem but i found a bit complicated more than most of meduim problems that i solved because there is some confusion to deal with the issue of are going to delete the left or the right character anyways here are the steps of my solution 

1. Set up two pointers
    - left ← 0, right ← s.length – 1.
    - These will walk toward each other, comparing mirrored characters.
2. Scan while the characters matchchecking if the number before it exists or no if the number exists so it's not a start of a sequence.
    - While left < right and `s[left] == s[right]`, advance:
    - If the loop finishes without a mismatch, the string is already a palindrome ⇒ return `true`.
3. First mismatch encountered.
    - You are allowed to delete one character.
    - Two possibilities keep the rest of the string intact:
        1. Skip the left character — check whether the substring `s[left+1 … right]` is a palindrome.
        2. Skip the left character — check whether the substring `s[left … right + 1]` is a palindrome.
4. If either substring passes, the original string can be made palindromic ⇒ return true; otherwise return false.

We can use a helpful fucntion to simplify the code the helpful function check if a subarray is a palindrome to avoid repetition.


[**Python Solution**](Python/Solution.py)

```python
def validPalindrome(self, s: str) -> bool:
    left = 0
    right = len(s) - 1
    s_list = list(s)
    flag = True
    while left <= right:
        if s_list[left] != s_list[right] and flag:
            new_right = right - 1
            new_left = left
            while new_left <= new_right:
                if  s_list[new_right] != s_list[new_left]:
                    flag = False
                new_left += 1
                new_right -= 1

            if flag:
                return True

            new_right = right
            new_left = left + 1
            flag = True
            while new_left <= new_right:
                if  s_list[new_right] != s_list[new_left]:
                    flag = False
                new_left += 1
                new_right -= 1

            return flag

        left += 1
        right -= 1

    return True
```

[**C++ Solution**](C++/Solution.cpp)

```cpp
bool validPalindrome(string s) {
    int left = 0; 
    int right = s.size() - 1;
    bool flag = true;
    while (left <= right){
        if (s[left] != s[right])
        {
            int new_left = left;
            int new_right = right - 1;
            while (new_left <= new_right)
            {
                if (s[new_left] != s[new_right])
                {
                    flag = false;
                    break;
                }
                new_left++;
                new_right--;
            }

            if (flag)
            {
                return true;
            }
            flag = true;
            new_left = left + 1;
            new_right = right;

            while (new_left <= new_right)
            {
                if (s[new_left] != s[new_right])
                {
                    flag = false;
                    break;
                }
                new_left++;
                new_right--;
            }

            return flag;

        }
        left++;
        right--;
    }
    return flag;
}
```

