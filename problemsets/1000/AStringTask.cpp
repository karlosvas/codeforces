#include <iostream>
using namespace std;

int main() {
  string s, r = "";
  cin >> s;

  const string vocales = "aeiouyAEIOUY";

  for (char c : s) {
    if (vocales.find(c) != string::npos)
      continue;

    r += '.';
    r += tolower(c);
  }

  cout << r << endl;

  return 0;
}
