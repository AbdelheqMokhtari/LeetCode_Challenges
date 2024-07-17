#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;


int heightChecker(vector<int>& heights) {
	std::vector<int> expected = heights;
	// Sort the new vector in increasing order
	std::sort(expected.begin(), expected.end());
	int results = 0;

	for (int i = 0; i < expected.size(); i++) {
		if (heights[i] != expected[i]) {
			results++;
		}
	}
	return results;
}

int main() {
	int result;
	std::vector<int> myVector = { 1,2,3,4,5 };
	result = heightChecker(myVector);
	cout << "he number of indices where the heights doesn't match the expected " << result <<endl;
	return 0;
}	


