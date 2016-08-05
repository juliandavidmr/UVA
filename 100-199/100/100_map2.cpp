#include <iostream>
#include <map>

using namespace std;

inline long min(long, long);
inline long max(long, long);
inline long resolve(long, long);
inline long countn(long long);

std::map<long, long> mapa;

long min(long a, long b) {
	return (a < b)? a: b;
}

long max(long a, long b) {
	return (a > b)? a: b;
}

long countn(long long n) {
	long count = 1;
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

long resolve(long max, long min) {
  if(!max && !min) {
    return 0;
  }
  
	long may = 0;
	long long n = 0;

	while(min++ <= max) {
	  //cout << "Value map: " << mapa[min] << endl;
		if (mapa[min]) {
			n = mapa[min];
		} else {
			n = countn(min);
			mapa[min] = n;
		}

		if(n > may) {
			may = n;
		}
	}
	return may;
}

/**
1 10 20
100 200 125
201 210 89
900 1000 174
*/

int main() {
  long a, b, may, min_;
  while(cin >> a >> b) {
  	may = max(a, b);
  	min_ = min(a, b);

  	cout << a << " " << b << " " << resolve(may, min_) << endl;
  }

  return 0;
}