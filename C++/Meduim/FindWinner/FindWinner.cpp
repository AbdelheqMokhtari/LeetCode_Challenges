#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
	vector<vector<int>> answer;
	set<int> uniqueValues;
	vector<int> zeromatch;
	vector<int> onematch;
	int i;
	for (int i = 0; i < matches.size(); i++) {
		for (int j = 0; j < matches[i].size(); j++) {
			uniqueValues.insert(matches[i][j]);
		}
	}
	for (int value : uniqueValues) {
		int count = 0;
		for (const auto& match : matches) {
			if (value == match[1]) {
				count++;
			}
		}
		if (count == 0) {
			zeromatch.push_back(value);
		}
		else if (count == 1) {
			onematch.push_back(value);
		}
	}
	answer.push_back(zeromatch);
	answer.push_back(onematch);

	return answer;
}

int main() {
	vector<vector<int>> matches = {{1,3}, {2,3}, {3,6}, {5,6}, {5,7}, {4,5}, {4,8}, {4,9}, {10,4}, {10,9}};
	vector<vector<int>> answer = findWinners(matches);
	

	// Print the vector of vectors
	for (const auto& row : answer) {
		for (int value : row) {
			std::cout << value << " ";
		}
		std::cout << std::endl;
	}





}	


