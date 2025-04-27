// 680. Valid Palindrome II
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.
// A palindrome is a string that reads the same backward as forward.
// Example 1:
// Input: s = "aba"
// Output: true
// Example 2:
// Input: s = "abca"
// Output: true
// Example 3:
// Input: s = "abc"
// Output: false
// Constraints:
// 1 <= s.length <= 105
// s consists of lowercase English letters.
// approach: Two pointers

// Solution:
#include <iostream>
#include <string>
using namespace std;


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