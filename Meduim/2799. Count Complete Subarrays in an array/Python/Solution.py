# Time Complexity O(N²)
# Space Complexity O(N)

def countCompleteSubarrays(nums) -> int:
    count = 0
    n = len(nums)
    hashset = set(nums)
    k = len(hashset)

    if k == 1:
        count = (n * (n+1)) // 2
        return count

    for i in range(n):
        current_set = set()
        for j in range(i,n):
            current_set.add(nums[j])
            if len(current_set) == k:
                count += (n-j)
                break
    
    return count

if __name__ == "__main__":
    nums1 = [1, 3, 1, 2, 2]
    nums2 = [5, 5, 5, 5]

    print(f'The result of the 1st test case : {countCompleteSubarrays(nums1)}')
    print(f'The result of the 2nd test case : {countCompleteSubarrays(nums2)}')