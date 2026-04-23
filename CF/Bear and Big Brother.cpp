#include<iostream>
using namespace std;

int main(){
  int a,b;
  cin >> a >> b;
  int year = 0;
  for (int i = 1; a <= b; i++)
  {
    a *= 3; 
    b *= 2 ;  
    year++; 
  }
  cout << year; 
  return 0;
  
}