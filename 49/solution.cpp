#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    map<string, vector<string>> groups;

    for (int i = 0; i < strs.size(); i++) {

        string temp = strs[i];

        sort(temp.begin(), temp.end());

        groups[temp].push_back(strs[i]);
    }

    for (auto group : groups) {
        cout << "[";
        for (int i = 0; i < group.second.size(); i++) {
            cout << group.second[i] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}