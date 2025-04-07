#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
	vector<vector<int>> results;
	vector<int> list;
	int low_pointer, high_pointer;
	int count;
	std::sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size()-2; i++) {
		low_pointer = i + 1;
		high_pointer = nums.size() - 1;
		if (i != 0 && nums[i] == nums[i - 1]) {
			continue;
		}
		while (low_pointer < high_pointer){
			count = nums[i] + nums[low_pointer] + nums[high_pointer];
			if (count == 0) {
				list.push_back(nums[i]);
				list.push_back(nums[low_pointer]);
				list.push_back(nums[high_pointer]);
				results.push_back(list);
				list.clear();
				low_pointer++;
				while (nums[low_pointer] == nums[low_pointer - 1] && low_pointer < high_pointer)
				{
					low_pointer++;
				}
			}

			else if (count < 0) {
				low_pointer++;
			}
			else if (count > 0) {
				high_pointer--;
			}
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
	std::vector<int> nums = { -1,0,1,2,-1,-4 };
	result = threeSum (nums);
	vectorDisplay(result);
	return 0;
}	


