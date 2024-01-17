#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int i = 0;
    if (arr.size() < 3) {
        cout << "array size is small";
        return i;
    }
    while (i<arr.size()) {
        if (arr[i] > arr[i + 1])
            return i;
        i++;
    }
    return i;

}

int main() {
	vector<int> arr1 = { 0,0,1,0 };
    vector<int> arr2 = { 0,2,1,0 };
    vector<int> arr3 = { 0,10,5,2 };
    cout << peakIndexInMountainArray(arr1) << endl;
    cout << peakIndexInMountainArray(arr2) << endl;
    cout << peakIndexInMountainArray(arr3) << endl;

    return 0;
}	


