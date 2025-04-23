# Time complexity O(NlogN) because of sorting
# Space Complexity O(1)
# the problem is easy but the concept of finding pairs that gives you the minimize maximum is a bit complicated

def maxPair(nums) -> int :
    nums.sort()
    left = 0
    right = len(nums) - 1
    max_pair = 0
    while left < right:
        max_pair = max(max_pair, nums[left] + nums[right])
        left += 1
        right -= 1

    return max_pair

if __name__ == "__main__":
    list1 = [3, 5, 2, 3]
    list2 = [3, 5, 4, 2, 4, 6]

    print(f'the results of the 1st test case is {maxPair(list1)}')
    print(f'the results of the 2nd test case is {maxPair(list2)}')