def countCompleteSubarrays(nums) -> int:
    count = 0
    n = len(nums)
    hashset = set(nums)
    k = len(hashset)

    if k == 1:
        count = (n * (n+1)) // 2
        return count
    for j in range(k, j+1):
        for i in range(n - j + 1):
            if set(nums[i:i+j]) == hashset:
                count += 1

    return count 


if __name__ == "__main__":
    nums1 = [1, 3, 1, 2, 2]
    nums2 = [5, 5, 5, 5]

    print(f'The result of the 1st test case : {countCompleteSubarrays(nums1)}')
    print(f'The result of the 2nd test case : {countCompleteSubarrays(nums2)}')