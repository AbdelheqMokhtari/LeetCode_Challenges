#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& str) {
    int vowelCount = 0;
    // Loop through each character in the string
    for (char c : str) {
        // Check if the character is a vowel (case-insensitive)
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            vowelCount++;
        }
    }
    return vowelCount;
}

bool halvesAreAlike(string s) {

    // Calculate the index to split the string into two halves
    int splitIndex = s.length() / 2;

    // Split the string into two halves
    string a = s.substr(0, splitIndex);
    string b = s.substr(splitIndex, s.length());

    // Count the number of vowels in each half
    int vowelsInA = countVowels(a);
    int vowelsInB = countVowels(b);

    if (vowelsInA == vowelsInB) {
        return true;
    }
    else {
        return false;
    }
}


int main()
{   
    string phrase = "Helloo";
    cout << halvesAreAlike(phrase) << endl;
    return 0;
}


