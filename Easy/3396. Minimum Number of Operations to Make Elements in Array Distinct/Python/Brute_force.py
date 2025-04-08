def minimumOperations(nums):
    ans = 0
    while(len(set(nums)) != len(nums)):
        ans += 1
        if(len(nums) <= 3):
            return ans

        nums = nums[3:] # drop the first three elements 
        
    return ans

if __name__ == '__main__': 
    nums1 = [1, 2, 3, 4, 2, 3, 3, 5, 7]
    nums2 = [4, 5, 6, 4, 4]
    nums3 = [5, 4, 3, 2, 1]
    nums4 = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    nums5 = [6, 7, 8, 9]

    print(f'Test Case 1 Result : {minimumOperations(nums1)}')
    print(f'Test Case 2 Result : {minimumOperations(nums2)}')
    print(f'Test Case 3 Result : {minimumOperations(nums3)}')
    print(f'Test Case 4 Result : {minimumOperations(nums4)}')
    print(f'Test Case 5 Result : {minimumOperations(nums5)}')