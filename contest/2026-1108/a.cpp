#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> p(n + 1);

    int even_val = 2;
    int odd_val = 1;

    for (int i = 1; i <= n; i++) {
      if (i % 2 == 1) {
        p[i] = even_val;
        even_val += 2;
      } else {
        p[i] = odd_val;
        odd_val += 2;
      }
    }

    for (int i = 1; i <= n; i++)
      cout << p[i] << " ";
    cout << "\n";
  }
}
