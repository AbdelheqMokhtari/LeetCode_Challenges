#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> myHashMap;
	int required;
	for (int i = 0; i < nums.size(); i++) {
		required = target - nums[i];
		auto it = myHashMap.find(required);
		if (it != myHashMap.end()) {
			return { it->second,i };
		}
		else {
			myHashMap[nums[i]] = i;
		}
	}
	return {};
}




int main() {
	vector<int> numbers = { 2,7,11,15 };
	vector<int> result;
	int target = 9;
	result = twoSum(numbers,target);
	for (int i = 0; i < result.size(); ++i) {
		std::cout << result[i] << " ";
	}

}	


