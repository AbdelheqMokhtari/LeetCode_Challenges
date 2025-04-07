#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    vector<std::vector<int>> answer(2);
    unordered_map<int, int> losses; 
    unordered_set<int> played;      

    for (const auto& match : matches) {
        played.insert(match[0]);  
        played.insert(match[1]);  
        losses[match[1]]++;       
    }

    for (int player : played) {
        if (losses[player] == 0) {
            answer[0].push_back(player);
        }
        else if (losses[player] == 1) {
            answer[1].push_back(player);
        }
    }

    // Sorting the vectors in increasing order
    sort(answer[0].begin(), answer[0].end());
    sort(answer[1].begin(), answer[1].end());

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


