#include <iostream>
using namespace std;

int main()
{
  int n;
  int EvenSum = 0;
  cout << "Enter the Number: ";
  cin >> n;

  // print sum of Even Numbers

  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      EvenSum += i;
    }
  }
  cout << "Sum of Even No. : " << EvenSum << endl;
  return 0;
}