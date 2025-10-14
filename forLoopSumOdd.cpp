#include <iostream>
using namespace std;

int main()
{
  int n;
  int sum = 0;
  cout << "Enter the Number: ";
  cin >> n;

  // print sum of Odd Numbers

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      sum += i;
    }
  }
  cout << "Sum: " << sum << endl;
  return 0;
}