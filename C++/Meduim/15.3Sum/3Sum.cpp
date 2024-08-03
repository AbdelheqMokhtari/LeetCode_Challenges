#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
	int slow, fast;
	vector<int> list;
	bool flag = false;
	vector<vector<int>> results;
	std::sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size()-2; i++) {

		if (flag) {
			flag = false;
			continue;
		}

		for (int j = 0; j < nums.size()-i; j++) {
			slow = nums[i+1+j];
			fast = nums[nums.size() - j - 1];
			if (i + 1 + j >= nums.size() - j - 1) {
				break;
			}

			
			if ((slow + fast) == - nums[i]) {
				list.push_back(nums[i]);
				list.push_back(slow);
				list.push_back(fast);
				results.push_back(list);
				list.clear();
			}
		}

		if (nums[i] == nums[i + 1]) {
			flag = true;
		}

		
	}
	return results;
}

void vectorDisplay(vector<vector<int>> vec) {
	for (const auto& innerVec : vec) {
		for (int elem : innerVec) {
			std::cout << elem << " ";
		}
		std::cout << std::endl;
	}
}

int main() {
	std::vector<vector<int>> result;
	std::vector<int> nums = { 0,0,0,0 };
	result = threeSum (nums);
	vectorDisplay(result);
	return 0;
}	


