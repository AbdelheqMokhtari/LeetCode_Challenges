from typing import List

# python 3.8.4

## Brute force solution (Doesn't work in leetcode due to the complexitiy)

## steps for the solution 

"""
Here are the steps to solve the problem using :

1- we take the largest number from the list candies and we get the total sum of candies that we have.
2- we loop from max_candies to 0 (excluded) 
3- for each iteration we compare i multiplied by k with sum_candies to check if we can gave the childern this number of candies.
4- if the condition was wrong we go to the next step where we use create a new list ans.
5- we devided i with all the numbers of candies in the list
6- for example if we have candies[j] = 13 and i = 5 we divide 13 by 5 and the results will be 2 so then we add 5 twice to the list.
7- after finishing the division with all numbers of list candies than we check the size of ans  if the size is bigger or equal to the k so that's a valid solution.
8- if we didn't find any solution than we return 0
"""
def maximumCandies(candies: List[int], k: int) -> int:
    # Sort the candies list
    max_candies = max(candies)
    sum_candies = sum(candies)
    # candies.sort(reverse=True)
    # print(candies)
    for i in range(max_candies, 0, -1):
        if i * k > sum_candies :
            continue
        ans = []
        for j in range(len(candies)):
            n = candies[j] // i
            ans.extend([i] * n)
            if len(ans) >= k:
                return i
          
    return 0

## Brute force solution updated 

def maximumCandies(candies: List[int], k: int) -> int:
    # Sort the candies list
    max_candies = max(candies)
    sum_candies = sum(candies)

    if k > sum_candies:
        return 0
    
    # candies.sort(reverse=True)
    # print(candies)
    for i in range(max_candies, 0, -1):
        if i * k > sum_candies :
            continue
        ans = 0
        for j in range(len(candies)):
            n = candies[j] // i
            ans = ans + n
            if ans >= k:
                return i
          
    return 0


# Test cases
if __name__ == '__main__':
    candies = [5, 2, 6, 2]
    children = 3
    print(maximumCandies(candies, children)) # output is 3

    candies = [5,8,6]
    children = 3
    print(maximumCandies(candies, children)) # output is 5

    candies = [2,5]
    children = 11
    print(maximumCandies(candies, children)) # output is 0   

