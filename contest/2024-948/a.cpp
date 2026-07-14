#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    if (n >= m && (m - n) % 2 == 0)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
  return 0;
}
