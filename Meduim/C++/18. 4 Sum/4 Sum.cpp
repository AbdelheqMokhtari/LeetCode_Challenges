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


vector<vector<int>> fourSum(vector<int>& nums, int target) {
    std::vector<std::vector<int>> result;
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates

        for (int j = i + 1; j < nums.size() - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates

            int left = j + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    result.push_back({ nums[i], nums[j], nums[left], nums[right] });
                    while (left < right && nums[left] == nums[left + 1]) left++; // Skip duplicates
                    while (left < right && nums[right] == nums[right - 1]) right--; // Skip duplicates
                    left++;
                    right--;
                }
                else if (sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
    }

    return result;

}


vector<vector<int>> fourSumSecond(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    set<vector<int>> results;

    int n = nums.size();
    for (int i = 0; i < n - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; 
        for (int j = i + 1; j < n - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue; 
            int left = j + 1, right = n - 1;
            while (left < right) {
                long long total = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];
                if (total == target) {
                    results.insert({ nums[i], nums[j], nums[left], nums[right] });
                    ++left;
                    --right;
                    while (left < right && nums[left] == nums[left - 1]) ++left; 
                    while (left < right && nums[right] == nums[right + 1]) --right; 
                }
                else if (total < target) {
                    ++left;
                }
                else {
                    --right;
                }
            }
        }
    }

    return vector<vector<int>>(results.begin(), results.end());

}

void vectorDisplay(vector<vector<int>> vec) {
    for (const auto& innerVec : vec) {
        for (const auto& num : innerVec) {
            cout << num << "  ";
        }
        cout << endl; 
    }
}

int main() {
    vector<vector<int>> result;
    vector<int> nums = { -3,-1,0,2,4,5 };
    int target = 0;
	result = fourSum(nums, target);
    vectorDisplay(result);
	return 0;
}	


