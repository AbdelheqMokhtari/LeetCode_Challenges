#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    int size = n * 2;
    vector<int> arr(size, 0);

    for (int i = 0; i < n; i++) {
        arr[i] = nums[i];
        arr[i + n] = nums[i];
    }

    return arr;
}

int main() {
    
    // Test Case 1
    vector<int> nums1 = {1, 2, 3};
    vector<int> result1 = getConcatenation(nums1);
    cout << "Test Case 1 Result: ";
    for (int i : result1) {
        cout << i << " ";
    }
    cout << endl;

    // Test Case 2
    vector<int> nums2 = {4, 5, 6, 7};
    vector<int> result2 = getConcatenation(nums2);
    cout << "Test Case 2 Result: ";
    for (int i : result2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

        