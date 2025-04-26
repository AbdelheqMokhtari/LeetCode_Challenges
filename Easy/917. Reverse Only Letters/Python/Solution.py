def reverseLetters(s:str) -> str:
    left = 0
    right = len(s) - 1
    s_list = list(s)
    while left < right:
        while not(s_list[left].isalpha()) and left < right:
            left += 1
        while not(s_list[right].isalpha()) and left < right:
            right -= 1
        s_list[left],s_list[right] = s_list[right], s_list[left]
        left += 1
        right -= 1
    
    return "".join(s_list)
        

if __name__ == "__main__":
    s1 = "ab_cd"
    print(f'the reverse of {s1} is {reverseLetters(s1)}')