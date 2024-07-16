#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;


int missingNumber(vector<int>& nums) {

	std::size_t n = nums.size();
	int expected = n * (n+1) /2;
	int sum = 0;
	for (int value : nums) {
		sum += value;
	}

	return expected - sum;

}

int missingNumberSet(vector<int>& nums) {
	std::unordered_set<int> mySet(nums.begin(), nums.end()); 

	int n = nums.size();
	for (int i = 0; i <= n; ++i) {
		if (mySet.find(i) == mySet.end()) {
			return i;
		}
	}

	return -1; 

}

int main() {
	int result;
	std::vector<int> myVector = { 0,1 };
	result = missingNumberSet(myVector);
	cout << "the missing number is : " << result << endl;
	return 0;
}	


