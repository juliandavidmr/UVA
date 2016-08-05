#include <iostream>
#include <map>

using namespace std;

inline int min(long, int);
inline int max(int, int);
inline long resolve(int, int);
inline int countn(long);

std::map<int, int> mapa;

int min(int a, int b) {
	return (a < b)? a: b;
}

int max(int a, int b) {
	return (a > b)? a: b;
}

int countn(long long n) {
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

long resolve(int max, int min) {
	int may = 0, n = 0;

	while(min++ <= max) {
		if (mapa[min]) {
			n = mapa[min];
		} else {
			mapa[min] = n = countn((long) min);
		}

		if(n > may) {
			may = n;
		}
	}
	return may;
}

int main() {
  int a, b, may, min_;
  while(cin >> a >> b) {
  	may = max(a, b);
  	min_ = min(a, b);

  	cout << a << " " << b << " " << resolve(may, min_) << endl;
  }

  return 0;
}