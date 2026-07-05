#include <iostream>

using namespace std;

int main() {

  int k, n, w;

  cin >> k >> n >> w;

  int i = 1;
  int need_money = 0;
  while (w--) {
    need_money += k * i;
    i += 1;
  }

  if (n >= need_money)
    cout << "0" << endl;
  else
    cout << need_money - n << endl;

  return 0;
}
