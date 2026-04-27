#include <iostream>
using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;
  string s = to_string(n);
  char digit = x + '0';
  if (s[0] == digit)
  {
    cout << false;
  }
  else if (s.find(digit) != string::npos)
  {
    cout << true;
  }

  else
  {
    cout << false;
  }
  return 0;
}