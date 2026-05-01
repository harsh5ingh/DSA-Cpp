#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;
  int CountOdd = 0;
  while (num > 0)
  {
    int LastDigit = num % 10;
  if (LastDigit % 2 == 1)
    {
      CountOdd += 1;
    }
    num = num / 10;
  }
    cout << CountOdd;
    return 0;
}