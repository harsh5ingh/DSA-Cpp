#include<iostream>
using namespace std;

void explainPair(){
  // normal method
  // int num1 = 2;
  // int num2 = 8;

  // pair method
  pair<int, int> pr1 = {2,8};
  cout << pr1.first << " " << pr1.second << endl;

  pair<int, char> pr2 = {2, 'b'};   // char can be use too
  cout << pr2.first << " " << pr2.second << endl;

  pair<pair<int, char>, int> pr3 = {{4, 'h'}, 8};
  cout << pr3.first.second <<endl;
}

int main(){
  explainPair();
  return 0;
}