#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
#include <limits>
using namespace std;




int rangeSum(vector<int>& nums, int n, int left, int right) {
	vector<int> sums;
	int sum;
	for (int i = 0; i < nums.size(); i++) {
		sum = nums[i];
		sums.push_back(nums[i]);
		for (int j = i + 1; j < nums.size(); j++) { 
			sums.push_back(sum + nums[j]);
			sum += nums[j];
		}
	}
	std::sort(sums.begin(), sums.end());

	sum = 0;
	for (int i = left-1; i < right; i++) {
		sum += sums[i];
		sum %= 1000000007;
	}
	return sum;
}

void displayVecotor(vector<int> vec) {

	for (int num : vec) {
		cout << num << endl;
	}
	
}


int main() {
	int result;
	int n = 4,left=3,right=4;
	std::vector<int> nums = { 1,2,3,4 };
	result = rangeSum(nums, n, left, right);
	cout << "the result : " << result << endl;
	return 0;
}	


