#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    int maxLen = 0, current = 0;
    for (char c : s) {
      if (c == '#') {
        current++;
        maxLen = max(maxLen, current);
      } else {
        current = 0;
      }
    }

    cout << (maxLen + 1) / 2 << "\n";
  }
  return 0;
}
