#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] + nums[j] == target) {
				return { i , j };
			}
		}
	}
	return {};
}




int main() {
	vector<int> numbers = { 3,2,4 };
	vector<int> result;
	int target = 6;
	result = twoSum(numbers,target);
	for (int i = 0; i < result.size(); ++i) {
		std::cout << result[i] << " ";
	}

}	


