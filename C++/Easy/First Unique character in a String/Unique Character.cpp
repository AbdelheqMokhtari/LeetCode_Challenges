#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

unordered_map<char, int> firstUniqChar(string s) {
	unordered_map<char, int> myMap;
	for (int i = 0; i < s.size(); i++) {
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
    return myMap;
}

int main() {
	string test = "leetcode";
    unordered_map<char, int> testMap;
    testMap= firstUniqChar(test);
    // Print the content of the map
    std::cout << "Content of the map:" << std::endl;
    for (const auto& pair : testMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

}	


