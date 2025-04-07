#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int firstUniqChar(string s) {
	unordered_map<char, int> myMap;
	for (size_t i = 0; i < s.size(); i++) {
        auto it = myMap.find(s[i]);

        if (it != myMap.end()) {
            // Key exists
            it->second++;
        }
        else {

            // Key doesn't exists
            myMap[s[i]] = 1;

        }
	}

    auto it = myMap.begin();

    while (it != myMap.end()) {
        if (it->second > 1) {
            it = myMap.erase(it);
        }
        else {
            ++it;
        }
    }

    for (size_t i = 0; i < s.size(); ++i) {
        auto it = myMap.find(s[i]);
        if (it != myMap.end()) {
            // Found the first character in the map along with its position
            return i;
        }
    }


    return -1;
}

int main() {
	string test = "aab";
    int result = firstUniqChar(test);
    cout << result << endl;

}	


