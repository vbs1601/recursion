#include <iostream>
using namespace std;

int climb(int k) {
  if (k == 0 || k == 1) {
    return 1;
  }

  int ans = climb(k - 1) + climb(k - 2);
  return ans;
}

int main() {
  int n;
  cin >> n;
  int ans = climb(n);
  cout << ans;
}