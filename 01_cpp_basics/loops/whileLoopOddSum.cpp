#include <iostream>
using namespace std;

int main()
{
  int n;
  int i = 1;
  int OddSum = 0;
  cout << "Enter the Number: ";
  cin >> n;

  // print sum of Odd Numbers

  while ( i <= n)
  {
    if (i % 2 != 0)
    {
      OddSum += i;
    }
    i++;
  }
  cout << "Sum of Odd No. : " << OddSum << endl;
  return 0;
}