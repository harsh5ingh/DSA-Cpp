#include <iostream>
using namespace std;

int main()
{
  int n = 3;
 // int sum;
  //cin >> n;

  for (int i = 1; i <= n; i++) // outer loop
  {

    for (int j = 1; j <=i; j++) // inner loop
    {
      cout << j;
      // j+=1;
    }
    cout << endl;
  }
  return 0;
}