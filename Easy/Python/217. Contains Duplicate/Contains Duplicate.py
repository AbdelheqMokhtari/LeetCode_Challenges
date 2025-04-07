
def containsDuplicate( nums: list[int]) -> bool:
    numbers = set()
    for i in nums:
        if i in numbers:
            return True
        numbers.add(i)
    return False


if __name__ ==  "__main__" :

    # Test Cases
    nums = [1, 2, 3, 1]
    print(f'does the list {nums} contain duplicated ? {containsDuplicate(nums)}') # Output: True
    nums1 = [1, 2, 3, 4]
    print(f'does the list {nums1} contain duplicated ? {containsDuplicate(nums1)}') # Output: False
    nums2 = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
    print(f'does the list {nums2} contain duplicated ? {containsDuplicate(nums2)}') # Output: True
    nums3 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    print(f'does the list {nums3} contain duplicated ? {containsDuplicate(nums3)}') # Output: False
    nums4 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10]
    print(f'does the list {nums4} contain duplicated ? {containsDuplicate(nums4)}') # Output: True
    nums5 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10]
    print(f'does the list {nums5} contain duplicated ? {containsDuplicate(nums5)}') # Output: True
    nums6 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10]
    print(f'does the list {nums6} contain duplicated ? {containsDuplicate(nums6)}') # Output: True
    nums7 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 10]
    print(f'does the list {nums7} contain duplicated ? {containsDuplicate(nums7)}') # Output: True
    nums8 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 10, 10]
    print(f'does the list {nums8} contain duplicated ? {containsDuplicate(nums8)}') # Output: True

    nums9 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
    print(f'does the list {nums9} contain duplicated ? {containsDuplicate(nums9)}') # Output: False