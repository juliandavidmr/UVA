#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <sstream>
#include <vector>

using namespace std;

/**
 Struct cell for spreed
*/
struct Cell {
  int row, column;
};

/**
  Methods
*/
Cell getPos(string);
void resolve(void);
int resolveSum(Cell);
int calc(string[]);

/**
 Define const
*/
#define MAX 1010
#define FORMU -12345678

/**
 Define vars
*/
string SPREED_STR[MAX][MAX];
int SPREED_NUM[MAX][MAX];

/** 
 The magic...
*/
Cell getPos(string str) {

  int row_aux =0;
  string column_aux = "";
  for (int i = 1; i < ((int)str.size()); i++) {
    if (!isdigit(str[i])) {
      row_aux = row_aux * 26 + (str[i] - 'A') + 1;
    } else {
      column_aux = column_aux + str[i];
    }
  }

  Cell cell;
  cell.row = row_aux;
  cell.column = atoi(column_aux.c_str());
  cout << "=>" << ((int)str.size())  << " --- " <<  row_aux << " - " <<column_aux <<  endl;
  return cell;
};

int resolveSum(string strop) {
  int result = 0;

  if (strop[0] == '=') {
    strop[0] = '\0';
  }

  char delim = '+';

  stringstream ss(strop);
  string item;

  while (getline(ss, item, delim)) {
    cout << "Item=" << item << endl;
    Cell c = getPos(item);
    int number = SPREED_NUM[c.column -1][c.row-1];
    cout << "POS[" << c.row << ", " << c.column << "]=" << number << endl;
    result += number;
  }

  return result;
}

/*
1
4 3
10 34 37 =A1+B1+C1
40 17 34 =A2+B2+C2
=A1+A2 =B1+B2 =C1+C2 =D1+D2
*/
void resolve() {
  int n, rows, columns;
  cin >> n;

  while(n--) {
    cin >> rows >> columns;

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        cin >> SPREED_STR[i][j];
        if (SPREED_STR[i][j][0] == '=') {
          SPREED_NUM[i][j] = FORMU;
        } else {
          SPREED_NUM[i][j] = atoi(SPREED_STR[i][j].c_str());          
        }
        //cout << SPREED_NUM[i][j];       
      }
    }

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
        if (SPREED_NUM[i][j] == FORMU) {
          int result_sum = resolveSum(SPREED_STR[i][j]);
          cout << "[" << SPREED_STR[i][j] << "]=" << result_sum << endl;
        } else {
          //SPREED_NUM[i][j] = atoi(SPREED_STR[i][j].c_str());          
        }
        //cout << SPREED_NUM[i][j];       
      }
    }
  }
}

int main(int argc, char const *argv[]) {
  resolve();
  
  cout << "\n =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= \n";
  Cell c = getPos("B1");
  cout << c.row << ", " << c.column;
  return 0;
}