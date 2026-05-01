#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int last = n % 10;  // ones place
    int first = n / 10; // tens place

    cout << first + last << endl;
  }

  return 0;
}