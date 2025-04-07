def getConcatenation(nums: list[int]) -> list[int]:
    n = len(nums)
    ans = [0] * (n*2)
    for i in range(n):
        ans[i] = nums[i]
        ans[i+n] = nums[i]
    return ans


if __name__ == '__main__': 
    test_inputs = [
        [1, 2, 1],
        [],
        [5],
        [1, 3, 2, 4],
        [-1, 0, 1]
    ]
    
    def test_format(input, output):
        return f"Input: {input}\nOutput: {output}\n"
    
    for test in test_inputs:
        result = getConcatenation(test)
        print(test_format(test, result))