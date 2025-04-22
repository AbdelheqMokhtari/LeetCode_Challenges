# time complexity O(n).
# Space Complexity O(1).
# Solved using Two pointers approach.

def maxArea(height)->int:
    left = 0
    right = len(height) - 1
    max_output = 0
    while left < right:
        if height[left] < height[right]:
            min_val = height[left]
            left += 1
        else:
            min_val = height[right] 
            right -= 1
        
        count = min_val * (right - left + 1)
        max_output = max(max_output, count)

    return max_output


if __name__ == "__main__":
    height1 = [1, 8, 6, 2, 5, 4, 8 ,3, 7]
    height2 = [1, 1]

    print(f'the output value of the use case 1 is : {maxArea(height1)}')
    print(f'the output value of the use case 2 is : {maxArea(height2)}')