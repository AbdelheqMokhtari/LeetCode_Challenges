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


bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    vector<int> result;
    while (x > 0) {
        result.push_back(x % 10);
        x /= 10;
    }
    int left = 0, right = result.size() - 1;
    while (right > left) {
        cout << result[right] << " " << result[left] << endl;
        if (result[right] != result[left]) {
            return false;
        }
        left++;
        right--;
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
    int x = 121;
	result = isPalindrome(x);
    cout << "result : " << result << endl;
	return 0;
}	


