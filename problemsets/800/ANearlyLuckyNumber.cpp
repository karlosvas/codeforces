#include <iostream>
#include <utility>

using namespace std;

#define ll long long

int main() {
  string s;
  cin >> s;

  if (s.size() < 2) {
    cout << "NO\n";
    return 0;
  }

  ll luky = 0;
  for (char c : s) {
    if (c == '4' || c == '7')
      luky++;
  }

  string s_i = to_string(luky);

  pair<bool, bool> p = {false, false};

  for (char c : s_i) {
    if (c == '4')
      p.first = true;
    else if (c == '7')
      p.second = true;
  }

  cout << ((p.first || p.second) ? "YES\n" : "NO\n");

  return 0;
}
