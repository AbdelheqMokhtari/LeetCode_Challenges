def reverseString(s:str):
    left = 0
    right = len(s) - 1
    s_list = list(s)
    while left < right:
        s_list[left], s_list[right] = s_list[right], s_list[left]
        left += 1
        right -= 1
    
    return "".join(s_list)


if __name__ == "__main__":
    s1 = "Hello"

    print(f'the reverse of {s1} is {reverseString(s1)}')
