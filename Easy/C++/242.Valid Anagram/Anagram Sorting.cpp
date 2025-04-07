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
	std::sort(s.begin(), s.end());
	std::sort(t.begin(), t.end());

	return s == t;

}


int main() {
	bool result;
	string s = "car";
	string t = "rat";
	result = isAnagram(s,t);
	cout << "the result : " << result << endl;
	return 0;
}	


