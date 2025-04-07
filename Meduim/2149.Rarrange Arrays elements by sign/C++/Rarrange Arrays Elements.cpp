#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
	int i = 0,j=1;
	vector<int> result(nums.size());
	for (const auto& num : nums) {
		if (num < 0) {
			result[j] = num;
			j=j+2;
		}
		else {
			result[i] = num;
			i=i+2;
		}
	}
	return result;
}

int main() {
	vector<int> nums = { 3,1,-2,-5,2,-4 };
	vector<int> results = rearrangeArray(nums);
	for (const auto& element : results) {
		cout << element << " ";
	}
}	


