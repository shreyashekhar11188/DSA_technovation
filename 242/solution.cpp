#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "anagram";
    string t = "nagaram";
    if (s.length() != t.length()) {
        cout << "false";
        return 0;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    cout << (s == t ? "true" : "false");
    return 0;
}