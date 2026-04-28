#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int num[] = {100, 20, 10, 5, 1};
  int count = 0;
  for (int i = 0; i < 5; i++)
  {
    count += n / num[i];
    n %= num[i];
  }
  cout << count;
  return 0;
}