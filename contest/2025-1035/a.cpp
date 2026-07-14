#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (a > b) {
      if (a % 2 == 0 || ((a - 1) != b))
        cout << -1 << endl;
      else
        cout << y << endl;
    } else {
      int i = 0;

      while (a != b) {
        if (a % 2 == 0 && y < x)
          i += y;
        else
          i += x;
        a++;
      }

      cout << i << endl;
    }
  }

  return 0;
}
