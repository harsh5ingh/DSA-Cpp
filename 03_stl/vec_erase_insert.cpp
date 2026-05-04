#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec = {1, 2, 3, 4, 5}; // output = 1 2 3 4 5

  // vec.erase(vec.begin()); // output = 2 3 4 5

  // vec.erase(vec.begin() + 2); // output = 1 2 4 5

  // vec.insert(vec.begin()+2, 100); // output = 1 2 100 3 4 5

  vec.clear(); // it clear all the given input

  /*cout << "Size: " << vec.size() << endl; // output = Size: 0
  cout << "Cap : " << vec.capacity() << endl; // output = Cap : 5 */

  cout << "is empty: " << vec.empty() << endl; // output = is empty: 1/true

  /* for (int val : vec)
  {
    cout << val << " ";
  }
  cout << endl; */

  return 0;
}