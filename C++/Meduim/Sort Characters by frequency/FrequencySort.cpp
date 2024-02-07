#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
using namespace std;

bool compareByFrequency(const pair<char, int>& a, const pair<char, int>& b) {
	
	return a.second > b.second;
}

string frequencySort(string s) {
	string result ="";
	map<char, int> frequency;
	for (size_t i = 0; i < s.size(); i++) {
		if (frequency.find(s[1]) != frequency.end()) {
			frequency[s[i]]++;
		}
		else {
			frequency[s[i]] = 1;
		}
	}

	vector<pair<char, int>> sortedFrequency(frequency.begin(), frequency.end());

	sort(sortedFrequency.begin(), sortedFrequency.end(), compareByFrequency);

	std::cout << "Content of the 'frequency' map:" << std::endl;
	for (const auto& entry : sortedFrequency) {
		for (size_t i = 0; i < entry.second; i++) {
			result += entry.first;
		}
	}
	return result;
}


int main() {
	string test = "cccaa";
	string results = frequencySort(test);

}	


