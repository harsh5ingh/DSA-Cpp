#include <iostream>
using namespace std;

int main()
{
  int n;
  bool isPrime = true;
  cout << "Enter the No. : ";
  cin >> n;
  for (int i = 2; i <= n - 1; i++)
  {
    if (n % i == 0) // notPrime
    {
      isPrime = false;
      break;
    }
  }
  if (isPrime == true)
  {
    cout << "Prime No." << endl;
  }
  else
  {
    cout << "Constant No." << endl;
  }

  return 0;
}