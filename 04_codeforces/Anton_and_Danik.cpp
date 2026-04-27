#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  char A, D;
  A = D = 0;
  for (int i = 0; i < n; i++)
  {
    char c;
    cin >> c;
    if (c == 'A')
    {
      A++;
    }
    else
    {
      D++;
    }
  }
  if (A > D)
  {
    cout << "Anton" << endl;
  }
  else if (D > A)
  {
    cout << "Danik" << endl;
  }
  else
  {
    cout << "Friendship" << endl;
  }
  
}