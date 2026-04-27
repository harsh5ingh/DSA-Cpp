#include <iostream>
using namespace std;

int main()
{
  int n;
  int OddSum = 0;
  cout << "Enter the Number: ";
  cin >> n;

  // print sum of Odd Numbers

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      OddSum += i;
    }
  }
  cout << "Sum of Odd No. : " << OddSum << endl;
  return 0;
}