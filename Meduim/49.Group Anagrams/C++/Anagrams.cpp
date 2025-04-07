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



vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> mp;

    for (auto x : strs) {
        string word = x;
        sort(word.begin(), word.end());
        mp[word].push_back(x);
    }

    vector<vector<string>> result;
    for (auto x : mp) {
        result.push_back(x.second);
    }
    return result;

}

void vectorDisplay(vector<vector<string>> vec) {
    for (const auto& innerVec : vec) {
        for (auto elem : innerVec) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}



int main() {
    vector<vector<string>> result;
    vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
	result = groupAnagrams(strs);
    vectorDisplay(result);
	return 0;
}	


