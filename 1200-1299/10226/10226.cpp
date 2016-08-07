#include <iostream>
#include <map>

using namespace std;

inline float percentage(float, float);

float percentage(float count, float n) {
  return (count*100.0) / n;
}

int main(int argc, char const *argv[]) {
  int cases, count;
  string specie;

  cin >> cases;

  getchar();
  getchar();

  while (cases--) {
    map<string, int> mapp;
    count = 0;

    while (getline(cin, specie)) {
      if (specie.empty()) {
        break;
      }
      mapp[specie]++;
      count++;
    }

    for(map<string, int>::iterator ii = mapp.begin(); ii != mapp.end(); ii++) {
      printf("%s %.4lf\n", ii->first.c_str(), percentage(ii->second, count));
    }
    if(cases) {
      cout << endl;
    }
  }

  return 0;
}
