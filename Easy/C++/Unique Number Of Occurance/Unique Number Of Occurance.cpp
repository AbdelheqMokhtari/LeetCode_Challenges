#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    // Create an unordered_map to store element occurrences
    unordered_map<int, int> elementCount;

    // Use a set to check if counts are unique
    unordered_set<int> uniqueCounts;

    // Iterate through the vector and update the elementCount map
    for (const auto& element : arr) {
        elementCount[element]++;
    }

    // Display the occurrences of each element
    std::cout << "Element occurrences:\n";
    for (const auto& entry : elementCount) {
        // If the count is already in the set, return false (not unique)
        if (!uniqueCounts.insert(entry.second).second) {
            return false;
        }

    }

    return true;
}

int main() {
	vector<int> arr1 = { 1,2,2,1,1,3 };
    vector<int> arr2 = { -3,0,1,-3,1,1,1,-3,10,0 };
    vector<int> arr3 = { 1,2 };
    cout << uniqueOccurrences(arr1) << endl;
    cout << uniqueOccurrences(arr2) << endl;
    cout << uniqueOccurrences(arr3) << endl;
    return 0;
}	


