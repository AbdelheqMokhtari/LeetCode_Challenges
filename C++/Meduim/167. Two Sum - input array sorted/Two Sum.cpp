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


vector<int> twoSum(vector<int>& numbers, int target) {
    int left_pointer = 0;
    int right_pointer = numbers.size()-1;
    while (true) {
        if (numbers[left_pointer] + numbers[right_pointer] == target) {
            return { numbers[left_pointer], numbers[right_pointer] };
        }
        else if (numbers[left_pointer] + numbers[right_pointer] >= target) {
            right_pointer--;
        }
        else {
            left_pointer++;
        }
    }
    
}

void vectorDisplay(vector<int> vec) {
    for (const auto& innerVec : vec) {
        cout << innerVec << endl;
    }
}

int main() {
    vector<int> result;
    vector<int> nums = { 2,7,11,15 };
    int target = 9;
	result = twoSum(nums, target);
    vectorDisplay(result);
	return 0;
}	


