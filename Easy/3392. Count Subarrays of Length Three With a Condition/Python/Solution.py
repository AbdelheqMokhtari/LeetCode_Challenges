# LeetCode 3392. Count Subarrays of Length Three With a Condition
# https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/
# O(n) time complexity
# O(1) space complexity
# Array

def countSubarrays(nums) -> int:
    count = 0
    n = len(nums)
    for i in range(1,n-1):
        if nums[i] == (nums[i-1] + nums[i+1])*2:
            count += 1
        
    return count

