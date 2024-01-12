def countVowels(s: str) -> int:
    vowel_count = 0
    vowels = "aeiouAEIOU"

    for char in s:
        if char in vowels:
            vowel_count += 1

    return vowel_count


def halvesAreAlike(s: str) -> bool:
    split_index = len(s) // 2
    a = s[0:split_index]
    b = s[split_index:len(s)]

    vowels_in_a = countVowels(a)
    vowels_in_b = countVowels(b)

    if vowels_in_b == vowels_in_a:
        return True
    else:
        return False


if __name__ == "__main__":
    variable = "Helloo"
    print(halvesAreAlike(s=variable))
