#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
	vector<int> merged;
	int i = 0, j = 0;
	while (i < nums1.size() && j < nums2.size()) {
		if (nums1[i] < nums2[j]) {
			merged.push_back(nums1[i]);
			i++;
		}
		else if (nums2[j] < nums1[i]) {
			merged.push_back(nums2[j]);
			j++;
		}
		else {
			merged.push_back(nums1[i]);
			merged.push_back(nums2[j]);
			j++;
			i++;
		}
	}
	while (i < nums1.size()) {
		merged.push_back(nums1[i]);
		i++;
	}
	while (j < nums2.size()) {
		merged.push_back(nums2[j]);
		j++;
	}
	int length_m = nums1.size() + nums2.size();

	if (length_m % 2 != 0) {
		return merged[length_m / 2];
	}

	return (static_cast<double>(merged[length_m / 2] + merged[(length_m / 2) - 1]) / 2);

}

int main() {
	vector<int> nums1 = { 1,1,3,4 };
	vector<int> nums2 = { 2,4 };
	double median = findMedianSortedArrays(nums1, nums2);
	cout << "the median of the two list is : " << median << endl;
}	


