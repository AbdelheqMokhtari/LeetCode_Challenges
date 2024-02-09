#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
using namespace std;

vector<int> largestDivisibleSubset(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	vector<int> result;
	vector<int> lis(nums.size(), 1);
	vector<int> prevIndex(nums.size(), -1);
	for (int i = 1; i < nums.size(); i++) {
		for (int j = 0; j < i; j++) {
			if (nums[i] % nums[j] == 0) {
				if (lis[i] <= lis[j]) {
					prevIndex[i] = j;
					lis[i] = 1 + lis[j];
				}
			}
		}
	}

	auto maxElementIterator = max_element(lis.begin(), lis.end());
	auto index = distance(lis.begin(), maxElementIterator);
	while (index != -1) {
		result.push_back(nums[index]);
		index = prevIndex[index];
	}
	return result;
}

int main() {
	vector<int> vectorNum{ 2,3,4,8 };
	vector<int> results = largestDivisibleSubset(vectorNum);
	for (const auto& num : results) {
		cout << num << "\n";
	}
}	


