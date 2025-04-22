# Time Complexity O(n)
# Space Complexity O(1)
# This problem is solved using the two pointers approach

def trap(height)-> int:
    left = 0
    right = len(height) - 1
    left_val = height[left]
    right_val = height[right]
    sum = 0

    while left < right:
        if left_val < right_val:
            left += 1
            left_val = max(left_val,height[left])
            sum +=  left_val - height[left]
        
        else:
            right -= 1
            right_val = max(right_val, height[right])
            sum += right_val - height[right]

    return sum

if __name__ == "__main__":
    height1 = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
    height2 = [4, 2, 0, 3, 2, 5]

    print(f'the output value of the use case 1 is : {trap(height1)}')
    print(f'the output value of the use case 2 is : {trap(height2)}')
