//
// Created by Chengwei Wang on 3/23/24.
//

#include <vector>
#include <string>
#include <map>
#include <iostream>

using namespace std;

vector<vector<string>> group(vector<string> strs) {
    map<string, vector<string>> m;
    for (auto str : strs) {
        string original = str;
        sort(str.begin(), str.end());
        if (m.count(str) == 0) {
            m[str] = {};
        }
        m[str].push_back(original);
    }
    vector<vector<string>> res = {};
    for (auto pair : m) {
        res.push_back(pair.second);
    }
    return res;
}

int main() {
    vector<string> strs = {"abc", "cba", "aab", "cdf"};
    vector<vector<string>> res = group(strs);
    for (auto v : res) {
        for (string s : v) {
            cout << s << " ";
        }
        cout << endl;
    }
    return 1;
}