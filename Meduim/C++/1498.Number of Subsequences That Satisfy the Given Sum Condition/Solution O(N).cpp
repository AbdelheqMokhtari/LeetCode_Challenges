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



const int MOD = 1e9 + 7;

int numSubseq(std::vector<int>& nums, int target) {
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    int left = 0, right = n - 1;
    int result = 0;

    std::vector<int> pow2(n, 1);
    for (int i = 1; i < n; ++i) {
        pow2[i] = (pow2[i - 1] * 2) % MOD;
    }

    while (left <= right) {
        if (nums[left] + nums[right] <= target) {
            result = (result + pow2[right - left]) % MOD;
            left++;
        }
        else {
            right--;
        }
    }

    return result;
}



void vectorDisplay(vector<int> vec) {
    for (const auto& num : vec) {
        cout << num << "  ";
    }
    cout << endl;
}


int main() {
    int result;
    vector<int> nums = { 14,4,6,6,20,8,5,6,8,12,6,10,14,9,17,16,9,7,14,11,14,15,13,11,10,18,13,17,17,14,17,7,9,5,10,13,8,5,18,20,7,5,5,15,19,14 };
    int target = 9;
	result = numSubseq(nums, target);
    cout << "result : " << result << endl;
	return 0;
}	


