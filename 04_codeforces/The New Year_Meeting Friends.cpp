#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;
  int maxVal = max(x1, max(x2, x3));
  int minVal = min(x1, min(x2, x3));
  cout << maxVal - minVal;
  return 0;
}