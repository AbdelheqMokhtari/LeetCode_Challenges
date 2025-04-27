def validPalindrome(self, s: str) -> bool:
    left = 0
    right = len(s) - 1
    s_list = list(s)
    flag = True
    while left <= right:
        if s_list[left] != s_list[right] and flag:
            new_right = right - 1
            new_left = left
            while new_left <= new_right:
                if  s_list[new_right] != s_list[new_left]:
                    flag = False
                new_left += 1
                new_right -= 1

            if flag:
                return True

            new_right = right
            new_left = left + 1
            flag = True
            while new_left <= new_right:
                if  s_list[new_right] != s_list[new_left]:
                    flag = False
                new_left += 1
                new_right -= 1

            return flag

        left += 1
        right -= 1

    return True