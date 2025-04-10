def productExceptSelf(nums):
    n = len(nums)
    ans = [0] * n
    suffix = [0] * (n - 1)
    prefix = [0] * (n - 1)

    prefix[0] = nums[0]
    
    suffix[-1] = nums[-1]
    print(prefix[2])
    for i in range(1,(n-1)):
        prefix[i] = prefix[i-1] * nums [i]
        suffix[-i-1] = suffix [-i] * nums [-i-1]
    
    ans[0] = suffix[0]
    ans[-1] = prefix[n-2]

    for i in range(1, (n-1)):
        ans[i] = prefix[i-1] * suffix[i]
    
    return ans




if __name__ == "__main__":
    nums1 = [1, 2, 3, 4]
    nums2 = [-1, 1, 0, -3, 3]

    print(f'the result of the list 1 : {productExceptSelf(nums1)}')
    print(f'the result of the list 1 : {productExceptSelf(nums2)}')