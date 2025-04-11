# Time Complexity : O(N)
# Space Complecity : O(N)
# Algorithm and approach : Using sets

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


if __name__ == "__main__":

    nums1 = [100, 4, 200, 1, 3, 2]
    nums2 = [0, 3, 7, 2, 5, 8, 4, 6, 0, 1]
    nums3 = [1, 0, 1, 2]

    print(f'The output of the first Test Case 1 : {longestConsective(nums1)}')
    print(f'The output of the first Test Case 2 : {longestConsective(nums2)}')
    print(f'The output of the first Test Case 3 : {longestConsective(nums3)}')