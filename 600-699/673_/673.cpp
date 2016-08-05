#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {  
  int n, 
    parenthesis_firts = 0, 
    parenthesis_end = 0, 
    corchetes_firts = 0, 
    corchetes_end = 0;
  string line;

  cin >> n;
  cin.clear();
  while (getline(cin, line) && n--) {   
    //cout << "Line:" << line.size() <<endl;        
    for(int i=0; i < line.size(); i++) {
      char c = (char) line[i];
      //cout << "=>" << c << endl;
      if (c == '['){
        corchetes_firts++;
      } else if (c == ']'){
        corchetes_end++;
      } else if (c == '('){
        parenthesis_firts++;
      } else if (c == ')'){
        parenthesis_end++;
      }
    }

    if(corchetes_end == corchetes_firts && parenthesis_firts == parenthesis_end) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }

    parenthesis_firts = 0; 
    parenthesis_end = 0;
    corchetes_firts = 0; 
    corchetes_end = 0;
  }

  return 0;
}