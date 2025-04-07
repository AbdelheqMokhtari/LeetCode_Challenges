#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
#include <limits>
#include <set>
using namespace std;



bool isAnagram(string s, string t) {
	if (s.size() != t.size()) {
		return false;
	}
	unordered_map<char, int> count;

	for (auto x : s) {
		count[x]++;
	}

	for (auto x : t) {
		count[x]--;
	}

	for (auto x : count) {
		if (x.second != 0) {
			return false;
		}
	}

	return true;

}


int main() {
	bool result;
	string s = "car";
	string t = "rat";
	result = isAnagram(s,t);
	cout << "the result : " << result << endl;
	return 0;
}	


