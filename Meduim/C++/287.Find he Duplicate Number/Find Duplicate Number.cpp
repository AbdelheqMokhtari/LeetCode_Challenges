#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;


int findDuplicate(vector<int>& nums) {
	int slow = nums[0];
	int fast = nums[nums[0]];
	while (slow != fast)
	{
		slow = nums[slow];
		fast = nums[nums[fast]];
	}
	slow = 0;
	while (slow != fast)
	{
		slow = nums[slow];
		fast = nums[fast];
	}
	return slow;
}

int main() {
	int result;
	std::vector<int> myVector = { 1,3,4,2,2 };
	result = findDuplicate(myVector);
	cout << "the Duplicate number is : " << result << endl;
	return 0;
}	


