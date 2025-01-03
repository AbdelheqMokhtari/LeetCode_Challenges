# Brute force solution
# Time complexity: O(n^2)
# Space complexity: O(1)
def twoSum(nums: list[int], target: int) -> list[int]:
    for i in range(len(nums)-1):
        for j in range(i+1,len(nums)):
            if nums[i] + nums[j] == target:
                return [i,j]

# Two pass hash table solution
# Time complexity: O(n)
# Space complexity: O(n)
def twoSumhash(nums: list[int], target: int) -> list[int]:
    hash_table = {}
    for i in range(len(nums)):
        hash_table[nums[i]] = i
    for i in range(len(nums)):
        complement = target - nums[i]
        if complement in hash_table and hash_table[complement] != i:
            return [i, hash_table[complement]]

# One pass hash table solution
# Time complexity: O(n)
# Space complexity: O(n)
def twoSumhash2(nums: list[int], target: int) -> list[int]:
    hash_table = {}
    for i in range(len(nums)):
        complement = target - nums[i]
        if complement in hash_table:
            return [hash_table[complement], i]
        hash_table[nums[i]] = i

# Test cases
if __name__ == '__main__':
    nums = [2,7,11,15]
    target = 9
    print(twoSum(nums, target))
    print(twoSumhash(nums, target))
    print(twoSumhash2(nums, target))    
    print("--------------------")
    nums2 = [3,2,4]
    target2 = 6
    print(twoSum(nums2, target2))
    print(twoSumhash(nums2, target2))
    print(twoSumhash2(nums2, target2))
    print("--------------------")

    nums3 = [3,3]
    target3 = 6
    print(twoSum(nums3, target3))
    print(twoSumhash(nums3, target3))
    print(twoSumhash2(nums3, target3))
    print("--------------------")

    nums4 = [3,2,3]
    target4 = 6
    print(twoSum(nums4, target4))
    print(twoSumhash(nums4, target4))
    print(twoSumhash2(nums4, target4))
    print("--------------------")