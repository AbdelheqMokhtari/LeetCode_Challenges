def reverseVowels(s:str) -> str:
    left = 0 
    right = len(s) - 1
    vowels = ['a', 'A', 'e', 'E', 'u', 'U', 'i', 'I', 'o', 'O']
    s_list = list(s)

    while left < right:
        while ((s_list[left] not in vowels) and (left < right)):
            print("here")
            left += 1
        while ((s_list[right] not in vowels) and (left < right)):
            print("here")
            right -= 1

        s_list[left], s_list[right] = s_list[right], s_list[left]

        left += 1
        right -= 1
    

    return "".join(s_list)


if __name__ == "__main__":
    s1 = "leetcode"
    print(f'the vowels reverse of {s1} is {reverseVowels(s1)}')