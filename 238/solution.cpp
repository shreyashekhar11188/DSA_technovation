#include <iostream>
#include <vector>
using namespace std;

int main() {
vector<int> nums = {1, 2, 3, 4};
int n = nums.size();

vector<int> ans(n, 1);
int left = 1;

for (int i = 0; i < n; i++) {
    ans[i] = left;
    left = left * nums[i];
}

int right = 1;
for (int i = n - 1; i >= 0; i--) {
    ans[i] = ans[i] * right;
    right = right * nums[i];
}
for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
}
return 0;
}