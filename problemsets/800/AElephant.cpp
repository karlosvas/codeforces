#include <iostream>

using namespace std;

int main() {

  int n, steps = 0;
  cin >> n;

  for (int i = 5; i > 0 && n > 0; i--) {
    while (i <= n) {
      n -= i;
      steps++;
    }
  }

  cout << steps << endl;

  return 0;
}
