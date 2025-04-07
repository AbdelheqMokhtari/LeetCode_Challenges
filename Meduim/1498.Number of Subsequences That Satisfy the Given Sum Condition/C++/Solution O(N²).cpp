#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
#include <limits>
#include <set>
using namespace std;



int numSubseq(vector<int>& nums, int target){
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    long long subsetCount = 1LL << n; // Use long long for larger bit shifts
    int results = 0;

    for (long long i = 0; i < subsetCount; ++i) {
        std::vector<int> subset;
        for (int j = 0; j < n; ++j) {
            if (i & (1LL << j)) {
                subset.push_back(nums[j]);
            }
        }
        
        if (subset.empty()) {
            continue;
        }

        if (subset.front() + subset.back() <= target) {
            results++;
        }

        
    }
    return results;
}


void vectorDisplay(vector<int> vec) {
    for (const auto& num : vec) {
        cout << num << "  ";
    }
    cout << endl;
}


int main() {
    int result;
    vector<int> nums = { 3,5,6,7 };
    int target = 9;
	result = numSubseq(nums, target);
    cout << "result : " << result << endl;
	return 0;
}	


