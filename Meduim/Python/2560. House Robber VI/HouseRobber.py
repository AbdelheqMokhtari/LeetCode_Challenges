from typing import List

"""
Here are the steps to solve the problem using :

1- we explore all the values of reward possible from 1 to the highest reward of a house 
using binary search 
2- for each mid value we calculate how many house we can rob 
3- if the total number of houses (housesRobbed) is greater or equal to k number of houses 
that we are going to rob so it's valid we update the maxReward with the mid values
4- otherwise we update the minReward with mid value + 1
5- we Return the minReward and that the final result
# """

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
