#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec = {1, 2, 3, 4, 5}; // output = 1 2 3 4 5

  // vec.erase(vec.begin()); // output = 2 3 4 5

  // vec.erase(vec.begin() + 2); // output = 1 2 4 5

  vec.insert(vec.begin()+2, 100);

  for (int val : vec)
  {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}