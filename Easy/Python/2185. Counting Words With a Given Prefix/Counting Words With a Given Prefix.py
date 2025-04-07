def prefixCount( words: list[str], pref: str) -> int:
    count = 0
    for word in words:
        if word.find(pref) == 0:
            count += 1
    return count

if __name__ == '__main__':
    words = ["apple", "banana", "apple", "apple", "apple", "banana", "apple", "apple", "apple", "banana"]
    pref = "ap"
    print(prefixCount(words, pref))
    