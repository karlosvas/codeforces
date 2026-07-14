#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    long long k = 0;
    int i = 1;
    bool stop = false;
    while (n--) {
      int x;
      cin >> x;
      k += x;
      k -= i;
      i++;

      if (k < 0)
        stop = true;
    }

    cout << (k >= 0 && !stop ? "YES\n" : "NO\n");
  }
  return 0;
}
