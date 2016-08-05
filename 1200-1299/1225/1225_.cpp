#include <iostream>
#include <map>
#include <string>

using namespace std;

inline void init(int);
inline void count(int);

map<int, int> map_count;

void init(int max) {
  map_count.clear();
  for(int i = 0; i < max; i++) {
    map_count[i] = 0;
  }
};

void count(int n) {
  cout << "entro " << n << endl;
  for(int i = 1; i <= n; i++) {
    if (i < 10) {
      map_count[i]++;
    } else {
      string aux_sep = to_string(i);
      int le = aux_sep.size();
      char characters[le];
      aux_sep.copy( characters, le);
      for(int j = 0; j < (int) aux_sep.size(); j++) {
        int x = characters[j] - '0';
        count(x);
      }
    }
  }
}

int main(int argc, char const *argv[]) {
  int n, x;
  cin >> n;

  while (n--) {
    cin >> x;
    
    init(x < 10? x : 10);

    count(x);
    for(int i = 0; i < 10; i++) {
      cout << i << " " << map_count[i] << " ";
    }

    cout << endl;
  }

  return 0;
}
