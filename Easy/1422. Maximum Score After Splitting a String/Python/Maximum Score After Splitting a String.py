
def maxScore(s: str) -> int:
    max = 0 
    for i in range(1,len(s)):
        left_s = s[0:i]
        right_s = s[i:len(s)]
        result = left_s.count("0") + right_s.count("1")
        if result > max:
            max = result
    return max


if __name__ == "__main__":
    print(f'Max Score for 011101 is : {maxScore("011101")}') # 5
    print(f'Max Score for 00111 is : {maxScore("00111")}') # 5
    print(f'Max Score for 1111 is : {maxScore("1111")}') # 3  
    print(f'Max Score for 00 is : {maxScore("00")}') # 1
    print(f'Max Score for 111 is : {maxScore("111")}') # 2
    print(f'Max Score for 00 is : {maxScore("00")}') # 1