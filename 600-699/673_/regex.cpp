#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(int argc, char const *argv[]) {
  string line;
  regex e("[^\\(]*(\\(.*\\))[^\\)]*");

  while (cin >> line) {

    //cout << regex_replace(line, r, "") << endl;
    std::string s (line);
    // using string/c-string (3) version:
    std::cout << std::regex_replace (s,e,"");

    // using range/c-string (6) version:
    std::string result;
    std::regex_replace (std::back_inserter(result), s.begin(), s.end(), e, "");
    std::cout << result;

    // with flags:
    std::cout << std::regex_replace (s,e,"$1 and $2",std::regex_constants::format_no_copy);
    std::cout << std::endl;
    /*if (regex_match(line, r)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }*/
  }

  return 0;
}
