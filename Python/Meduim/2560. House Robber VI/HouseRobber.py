from typing import List

def minCapability(nums: List[int], k: int) -> int:
    minReward = 1
    maxReward = max(nums)
    houses = len(nums)

    while minReward < maxReward:
        midReward = (minReward + maxReward) // 2
        housesRobbed = 0
        i = 0
        
        while i < houses:
            if nums[i] <= midReward:
                housesRobbed += 1
                i+=1
            i+=1
        
        if housesRobbed >= k:
            maxReward = midReward 
        else:
            minReward = midReward + 1 

   
    return minReward






# Test Case 
if __name__ == '__main__':
    values = [2,3,5,9]
    k = 2
    print(minCapability(values, k)) # output is 5

    values = [2,7,9,3,1]
    k = 2
    print(minCapability(values, k)) # output is 2
