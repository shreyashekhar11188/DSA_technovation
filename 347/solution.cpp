#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;

map<int, int> freq;
for (int i = 0; i < nums.size(); i++) {
    freq[nums[i]]++;
}

vector<pair<int, int>> v;
for (auto x : freq) {
    v.push_back({x.first, x.second});
}

sort(v.begin(), v.end(), [](auto a, auto b) {
    return a.second > b.second;
});

for (int i = 0; i < k; i++) {
    cout << v[i].first << " ";
}

    return 0;
}