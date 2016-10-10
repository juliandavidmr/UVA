#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(int argc, char const *argv[]) {
  string line;
  regex e("\b(\\w)?(\\w)\\w?\2\1");

  while (cin >> line && !line.empty()) {
    // using string/c-string (3) version:
    //cout << "Result (Replace): " << regex_replace(line, e, "") << endl;

    if (regex_match(line, e)) {
      cout << "Match" << endl;
    } else {
      cout << "No Match" << endl;
    }
  }

  return 0;
}
