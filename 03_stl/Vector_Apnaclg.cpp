#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec; // size = 0

  // push_back() & emplace_back() data ko last me insert krne ka kaam krta hai
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  vec.emplace_back(6);

  // pop_back() last data ko delete kr dega
  vec.pop_back();

  // cout << vec.size() << endl; // 3
  // cout << vec.capacity() << endl; // 4

  for (int val : vec)
  {
    cout << val << " ";
  }
  cout << endl;

  cout << "value at index 2: " << vec[2] << " or " << vec.at(2) << endl;
  cout << "front element: " << vec.front() << endl;
  cout << "last element: " << vec.back() << endl;
  return 0;
}