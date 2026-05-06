#include <iostream>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int uppercase = 0;
  int lowercase = 0;
  for (char &ch : s)
  {
    if (isupper(ch))
    {
      uppercase++;
    }
    else
    {
      lowercase++;
    }
  }
  if (uppercase > lowercase)
  {
    for (char &ch : s)
    {
      ch = toupper(ch);
    }
  }
  else
  {
    for (char &ch : s)
    {
      ch = tolower(ch);
    }
  }

  cout << s;

  return 0;
}