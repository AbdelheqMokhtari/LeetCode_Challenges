#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <algorithm>
#include <queue>
#include <limits>
#include <set>
using namespace std;


bool lemonadeChange(vector<int>& bills) {
    vector<int> change = { 0,0 };
    for (int i = 0; i < bills.size(); i++) {
        if (bills[i] == 5) {
            change[0]++;
        }
        else if (bills[i] == 10) {
            if (change[0] <= 0) {
                return false;
            }
            else {
                change[0]--;
                change[1]++;
            }
        }
        else {
            if (change[0] > 0 && change[1] > 0) {
                change[0]--;
                change[1]--;
            }
            else if (change[0] > 2) {
                change[0] -= 3;
            }
            else {
                return false;
            }
        }

    }
    return true;
}


void vectorDisplay(vector<int> vec) {
    for (const auto& num : vec) {
        cout << num << "  ";
    }
    cout << endl;
}


int main() {
    bool result;
    vector<int> bills = { 5,5,5,10,20 };
	result = lemonadeChange(bills);
    cout << "result : " << result << endl;
	return 0;
}	


