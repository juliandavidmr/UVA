/**
 * Word Scramble
 *
 * https://uva.onlinejudge.org/external/4/483.pdf
 */
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {
  string line, item;

  while (getline(cin, line) && !cin.eof()) {
    istringstream iss(line);

    while (getline(iss, item, ' ')) {
      reverse(item.begin(), item.end());
      cout << item << '\v';
    }
    cout << endl;

  }

  return 0;
}
