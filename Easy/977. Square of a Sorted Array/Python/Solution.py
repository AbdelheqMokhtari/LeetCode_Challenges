# Time Complexity is O(N).
# Space Complexity is O(N).
# Using Two Pointers left and right pointers approach


def squareOfArray(nums):
    results = []
    left = 0
    right = len(nums) - 1
    while left <= right:
        if (nums[left]**2) > (nums[right]**2):
            results.append(nums[left]**2)
            left += 1
        else:
            results.append(nums[right]**2)
            right -= 1

    return results[::-1]


if __name__ == "__main__":
    list1 = [-4,-1,0,3,10]
    print(f'the test case 1 results {squareOfArray(list1)}')
    list2 = [-7,-3,2,3,11]
    print(f'the test case 2 results {squareOfArray(list2)}')