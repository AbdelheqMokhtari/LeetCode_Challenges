def isAnagram(s: str, t: str) -> bool:
    s = ''.join(sorted(s))
    t = ''.join(sorted(t))
    if s == t:
        return True
    return False



if __name__ == '__main__':
    s = "anagram"
    t = "nagaram"
    print(isAnagram(s, t)) # True

    s = "rat"
    t = "car"
    print(isAnagram(s, t)) # False