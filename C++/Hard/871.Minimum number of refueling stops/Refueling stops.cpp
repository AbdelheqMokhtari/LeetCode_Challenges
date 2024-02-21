#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;

int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
	if (startFuel >= target) {
		return 0;
	}
	int stops=0;
	vector<int> distances;
	distances.push_back(stations[0][0]);
	for (size_t i = 0; i < stations.size()-1;i++) {
		distances.push_back(stations[i+1][0] - stations[i][0]);
	}
	distances.push_back(target - stations[stations.size()-1][0]);
	for (size_t i = 0; i < distances.size()-1;i++) {
		startFuel -= distances[i];
		if (startFuel < 0) {
			return -1;
		}
		if (startFuel - distances[i + 1]>0) {
			continue;
		}
		startFuel += stations[i][1];
		stops += 1;
		
	}
	return stops;
}

int main() {
	vector<vector<int>> gasStations = { {10, 60},{20, 30},{30, 30},{60, 40} };
	int target = 100;
	int startFuel = 10;
	int output = minRefuelStops(target, startFuel,gasStations);
	cout << output;
}	


