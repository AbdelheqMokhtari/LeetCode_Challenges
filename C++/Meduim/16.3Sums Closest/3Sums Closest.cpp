#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
#include <limits>
using namespace std;




int threeSumClosest(vector<int>& nums, int target) {
	std::sort(nums.begin(), nums.end());
	int output;
	int distance;
	int old_distance = std::numeric_limits<int>::max();
	for (int i = 0; i < nums.size()-2; i++) {
		int low_pointer = i + 1;
		int high_pointer = nums.size()-1;
		while (low_pointer < high_pointer) {
			distance = nums[i] + nums[low_pointer] + nums[high_pointer] - target;
			if (abs(distance) < abs(old_distance)) {
				old_distance = distance;
				output = nums[i] + nums[low_pointer] + nums[high_pointer];				
			}
			if (distance < 0) {
				low_pointer++;
			}
			else {
				high_pointer--;
			}
		}

	}
	return output;
}

int main() {
	int result;
	int target = 1;
	std::vector<int> nums = { -1,2,1,-4 };
	result = threeSumClosest(nums,target);
	cout << "the result : " << result << endl;
	return 0;
}	


