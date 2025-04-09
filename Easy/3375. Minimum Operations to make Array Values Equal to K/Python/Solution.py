# Time Complexity : O(NLogN)
# Space Complexity : O(N)

def minOperations(nums, k) -> int:
    nums.sort()
    if k > nums[0]:
        return -1
    numSet = set(nums)
    numSet.discard(k)
    return len(numSet)

if __name__ == "__main__":
    nums1 = [5, 2, 5, 4, 5]
    k1 = 2

    nums2 = [2,1,2]
    k2 = 2

    nums3 = [9, 7, 5, 3]
    k3 = 1

    print(f'The result of the test case 1 : {minOperations(nums1,k1)}')
    print(f'The result of the test case 2 : {minOperations(nums2,k2)}')
    print(f'The result of the test case 3 : {minOperations(nums3,k3)}')
