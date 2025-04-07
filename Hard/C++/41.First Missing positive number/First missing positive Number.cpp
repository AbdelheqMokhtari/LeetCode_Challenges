#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;


int firstMissingPositive(vector<int>& nums) {
    int numsLength = nums.size();
    int cycleStart = 0;

    // phase 1: sort the numbers with cyclic sort
    // move the cursor through the list
    while (cycleStart < numsLength) {
        // has minus 1 because the numbers start from 1 not 0
        long valAtI = (long)nums[cycleStart] - 1;

        // does the value belong in the range of the list?
        // if it doesn't, we get an out of bounds error
        // when we try to access nums[valAtI] later
        bool belongsInRange = valAtI >= 0 && valAtI < numsLength;

        if (belongsInRange && nums[cycleStart] != nums[valAtI]) {
            swap(nums[cycleStart], nums[valAtI]);
        }
        else {
            cycleStart++;
        }
    }

    // phase 2: find the first missing positive integer
    for (int x = 0; x < numsLength; x++) {
        // has plus 1 because the numbers start from 1 not 0
        if (x + 1 != nums[x]) {
            return x + 1;
        }
    }

    // if all numbers are in the correct spot,
    // the first missing positive integer is the
    // length of the list + 1
    return numsLength + 1;


}

int main() {
	int result;
	std::vector<int> myVector = { 3,4,-1,1 };
	result = firstMissingPositive(myVector);
	cout << "the fisrt missing  : " << result << endl;
	return 0;
}	


