#include <iostream>
#include <vector>
#include <set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    set<int> mySet(nums.begin(), nums.end());
    int maximum = 0;
    for(const auto& elem : mySet){
        if (!mySet.count(elem - 1)){
            int actual = 1;
            while (mySet.count(elem + actual)){
                actual++;
            }
            if (actual > maximum){
                maximum = actual;
            }
        }
    }
    return maximum;
}

int main() {
    vector<int> nums1;
    nums1 = {100,4,200,1,3,2};
    cout << "The results of Test Case 1 " << longestConsecutive(nums1) << endl;

    vector<int> nums2;
    nums2 = {0,3,7,2,5,8,4,6,0,1};
    cout << "The results of Test Case 2 " << longestConsecutive(nums2) << endl;

    vector<int> nums3;
    nums3 = {1,0,1,2};
    cout << "The results of Test Case 3 " << longestConsecutive(nums3) << endl;
}	
