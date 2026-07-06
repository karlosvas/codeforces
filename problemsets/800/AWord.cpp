#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  int lower = 0;
  for (char c : s)
    if (islower(static_cast<unsigned char>(c)))
      lower++;

  if (lower >= static_cast<int>(s.size()) - lower)
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c) { return tolower(c); });
  else
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c) { return toupper(c); });

  std::cout << s << endl;
  return 0;
}
