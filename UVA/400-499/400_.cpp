// Example program
#include <iostream>
#include <cstring>

using namespace std;

char invert(char c) {
  switch(c) {
    case 'E':
      return '3';
    case '3':
      return 'E';
    case 'L':
      return 'J';
    case 'J':
      return 'L';
    case 'S':
      return '2';
    case '2':
      return 'S';
    case 'Z':
      return '5';
    case '5':
      return 'S';    
    default:
      return c;
  }
}

bool isPalindrome(char line[]) {
  float len = strlen(line);
  float center = len / 2;
  printf("Par=>%f\n", (len%2));
  printf("   =>%f %f\n", len, center);
  for (int i = 0; i < strlen(line); i++)
  {
    printf("%c\n", line[i]);
  }
  return false;
}

int main()
{
  char text[10000];
  scanf("%s", text);
  printf("%s", text);
  isPalindrome(text);
  /*std::string name;
  std::cout << "What is° y  our name? ";
  getline (std::cin, name)°;
  std::cout << "Hello, " << name << "!\n";*/
  return 0;
}
