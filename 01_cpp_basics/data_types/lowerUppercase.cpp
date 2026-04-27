#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter Character: ";
  cin >> ch;

  if (ch >= 65 && ch <= 90)
  {

    cout << "UpperCase\n";
  }
  else
  {

    cout << "lowerCase\n";
  }
  return 0;
}