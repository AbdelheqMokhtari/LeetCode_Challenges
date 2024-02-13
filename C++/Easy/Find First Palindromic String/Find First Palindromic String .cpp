#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
using namespace std;

string firstPalindrome(vector<string>& words) {
	bool flag = false;
	for (const auto& word : words) {
		flag = true;
		int length = (word.length() / 2) + (word.length() % 2);
		for (int i = 0; i < length; i++) {
			
			cout << "word[i] : " << word[i] << " word[word.length() - i] : " << word[word.length() - 1 - i] << endl;
			if (word[i] != word[word.length() -1 - i]) {
				flag = false;
				break;
			}

		}
		if (flag == true) {
			cout << "the word " << word;
			return word;
		}
	}
	return "";
}


int main() {
	vector<string> words = { "abc","car","ada","racecar","cool" };
	string results = firstPalindrome(words);
	cout << " results : " << results << endl;

}	


