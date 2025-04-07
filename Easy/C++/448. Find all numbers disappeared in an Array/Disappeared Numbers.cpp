#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;


vector<int> findDisappearedNumbers(vector<int>& nums) {
	std::size_t numlength = nums.size();
	vector<int> results;
	int cycleStart = 0;
	while (cycleStart < numlength)
	{
		long val = (long)nums[cycleStart] - 1;

		bool rangeValid = val >= 0 && val < numlength;

		if (rangeValid && (nums[cycleStart] != nums[val])) {
			swap(nums[cycleStart], nums[val]);
		}
		else {
			cycleStart++;
		}
	}

	for (int x = 0; x < numlength; x++) {
		if (x + 1 != nums[x]) {
			results.push_back(x + 1);
		}
	}
	return results;
}

int main() {
	vector<int> result;
	std::vector<int> myVector = { 4,3,2,7,8,2,3,1 };
	result = findDisappearedNumbers(myVector);
	for (int num : result) {
		cout << num << endl;
	}
	return 0;
}	


