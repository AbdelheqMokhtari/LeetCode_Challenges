#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
	priority_queue<int, vector<int>, greater<int> > steps;
	for (size_t i = 0; i < heights.size()-1; i++) {
		if (heights[i] >= heights[i + 1]) {
			continue;
		}
		steps.push(heights[i + 1] - heights[i]);
		if (steps.size() > ladders) {
			bricks -= steps.top();
			steps.pop();
			if (bricks < 0) {
				return i;
			}
		}
	}
	
	return heights.size()-1;
}

int main() {
	vector<int> nums = { 4,2,7,6,9,14,12 };
	int bricks = 5;
	int ladders = 1;
	int output = furthestBuilding(nums, bricks,ladders);
	cout << output;
}	


