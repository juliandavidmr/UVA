#include <iostream>
#include <cstring>
#include <cstdio>
#include <map>

using namespace std;

#define I 128

static const char standard[I] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>? ";
static const char dvorak[I]   = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\" ";
 
int main() {
  string line; 

  map<char, char> mapp;
  for(int i = 0; i < I; i++) {
    mapp[standard[i]] = dvorak[i];
  }

  while (getline(cin, line)) {
    if(cin.eof())
      break;
    for(int i = 0; i < line.size(); i++) {
      cout << (char) mapp[line[i]];      
    }
    cout << endl;
  }
  return 0;
}