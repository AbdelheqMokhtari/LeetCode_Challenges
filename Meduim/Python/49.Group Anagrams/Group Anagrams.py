# time complexity: O(n * mlogm) where n is the number of strings and m is the length of the longest string
# space complexity: O(n * m) where n is the number of strings and m is the length of the longest string
# Link: https://leetcode.com/problems/group-anagrams/
def groupAnagrams(strs: list[str]) -> list[list[str]]:
    anagrams = {}
    for s in strs:
        key = ''.join(sorted(s))
        if key in anagrams:
            anagrams[key].append(s)
        else:
            anagrams[key] = [s]
    return list(anagrams.values())

if __name__ == "__main__":
    print(groupAnagrams(["eat","tea","tan","ate","nat","bat"])) # [["bat"],["nat","tan"],["ate","eat","tea"]]
    print(groupAnagrams([""])) # [[""]]
    print(groupAnagrams(["a"])) # [["a"]]
    print(groupAnagrams(["a","b","c","d"])) # [["a"],["b"],["c"],["d"]]*
    print(groupAnagrams(["a","b","c","d","ab","ba","cd","dc"])) # [["a","ab","ba"],["b"],["c","cd","dc"],["