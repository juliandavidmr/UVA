#include <iostream>
#include <map>

using namespace std;

inline int min(long, int);
inline int max(int, int);
inline long resolve(int, int, map);
inline int countn(long);

int min(int a, int b) {
	return (a < b)? a: b;
}

int max(int a, int b) {
	return (a > b)? a: b;
}

int countn(long n) {
	int count = 1;
	while(n != 1) {
		if (n % 2 == 0) {
			n = n >> 1; // Divide por 2
		} else {
			n = (n << 1) + n + 1; //Multiplica por 2, luego suma n + 1
		}
		count++;
	}
	return count;
}

long resolve(int max, int min, map map) {
	int may = 0, n = 0;

	while(min++ <= max) {
		if (map[min]) {
			n = map[min];
		} else {
			map[min] = n = countn((long) min);
		}

		if(n > may) {
			may = n;
		}
	}
	return may;
}

int main() {
	map<int, int> map;
  int a, b, may, min_;
  while(cin >> a >> b) {
  	may = max(a, b);
  	min_ = min(a, b);

  	cout << a << " " << b << " " << resolve(may, min_, &map) << endl;
  }

  return 0;
}