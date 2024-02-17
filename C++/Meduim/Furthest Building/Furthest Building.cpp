#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
using namespace std;

int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
	for (int i = 0; i < heights.size()-1; i++) {
		if (heights[i + 1] <= heights[i]) {
			continue;
		}
		else if ((bricks < heights[i + 1] - heights[i]) && ladders == 0) {
			return i;
		}
		else if((heights[i + 1] - heights[i]) <= bricks){
			bricks -= heights[i + 1] - heights[i];
		}
		else if(ladders != 0){
			ladders -= 1;
		}
	}
	return heights.size()-1;
}

int main() {
	vector<int> nums = { 4,12,2,7,3,18,20,3,19 };
	int bricks = 10;
	int ladders = 2;
	int output = furthestBuilding(nums, bricks,ladders);
	cout << output;
}	


