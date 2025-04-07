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




bool containsDuplicate(vector<int>& nums) {
	std::set<int> mySet;


	for (int num : nums) {
		// Checking if an element exists
		if (mySet.find(num) != mySet.end()) {
			return true;
		}
		else {
			mySet.insert(num);
		}
	}
	return false;
}


int main() {
	bool result;
	std::vector<int> nums = { 1,2,3,4 };
	result = containsDuplicate(nums);
	cout << "the result : " << result << endl;
	return 0;
}	


