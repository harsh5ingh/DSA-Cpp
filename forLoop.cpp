#include<iostream>
using namespace std;


int main(){
  int n;
  cout << "Enter Number: ";
  cin >> n;
  for(int i=n; i<=20; i+=5 ){
    cout << i <<" ";
  }
  cout<<endl;
  return 0;
}