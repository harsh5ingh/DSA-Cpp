#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> vec = {1, 2, 3, 4, 5};

  //cout << "vec.begin: " << *(vec.begin()) << endl; // output = vec.begin: 1
  cout << "vec.end: " << *(vec.end()) << endl; // output = vec.end: 0
}