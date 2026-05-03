#include<iostream>
#include<vector>
using namespace std;

int main(){

  vector<int> vec1 = {1, 2, 3, 4, 5}; // output = 1 2 3 4 5

  // vector<int> vec(3, 10); // output = 10 10 10

  // vector<int> vec(10, -1); // output = 1 -1 -1 -1 -1 -1 -1 -1 -1 -1

  vector<int> vec2(vec1); // agar hame vec1 ke input vec2 m use krne honge to.... output = 1 2 3 4 5


  for (int val : vec2)
  {
    cout << val << " ";
  }
  cout << endl;

  return 0;
  
}