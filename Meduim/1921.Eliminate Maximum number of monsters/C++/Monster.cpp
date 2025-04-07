#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;


int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
	int result = 1;
	std::vector<int> expected;
	for (int i = 0; i < dist.size(); i++) {
		if (dist[i] % speed[i] == 0) {
			expected.push_back(dist[i] / speed[i]);
		}
		else if (dist[i] % speed[i] != 0) {
			expected.push_back(dist[i] / speed[i]+1);
		}
	}
	std::sort(expected.begin(), expected.end());
	for (int step : expected) {
		cout << step << endl;
	}
	for (int i = 1; i < expected.size(); i++) {
		if (expected[i] <= i) {
			break;
		}
		result++;
	}
	return result;
}

int eliminateMaximum2(vector<int>& dist, vector<int>& speed) {
	int resutl = 0;
	std::vector<int> step;
	for (int i = 0; i < dist.size(); i++) {

	}
	return 0;
}

int main() {
	int result;
	std::vector<int> dist = { 4,2 };
	std::vector<int> speed = { 5,1 };
	result = eliminateMaximum(dist,speed);
	cout << result << " monster(s) can be eliminated." << endl;
	return 0;
}	


