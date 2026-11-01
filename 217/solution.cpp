#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        mp[x]++;

        if (mp[x] > 1) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
