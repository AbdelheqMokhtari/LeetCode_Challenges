# time complexity: O(n)
# space complexity: O(n)
# Link: https://leetcode.com/problems/unique-length-3-palindromic-subsequences/
def countPalindromicSubsequence(s: str) -> int:
    letters = set(s)
    ans = 0
        
    for letter in letters:
        i, j = s.index(letter), s.rindex(letter)
        between = set()
            
        for k in range(i + 1, j):
            between.add(s[k])
            
        ans += len(between)

    return ans



# Test Cases
if __name__ == "__main__":
    assert countPalindromicSubsequence("aabca") == 3
    assert countPalindromicSubsequence("adc") == 0
    assert countPalindromicSubsequence("bbcbaba") == 4
    assert countPalindromicSubsequence("abca") == 2
    assert countPalindromicSubsequence("aaa") == 1
    assert countPalindromicSubsequence("a") == 0
    assert countPalindromicSubsequence("ac") == 0
    assert countPalindromicSubsequence("ab") == 0
    assert countPalindromicSubsequence("abc") == 0
    assert countPalindromicSubsequence("abcb") == 1
    assert countPalindromicSubsequence("abca") == 2
    assert countPalindromicSubsequence("ababa") == 3
    assert countPalindromicSubsequence("abababa") == 4

