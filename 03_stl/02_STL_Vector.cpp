#include <bits/stdc++.h>
using namespace std;

void explainVector()
{
  vector<int> vec = {5, 8};
  vec.push_back(1);
  vec.push_back(2);
  vec.emplace_back(0);

  // [1, 2, 0]
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << " ";
  }
  cout << endl;

  // iterator
  for (auto i : vec)
  {
    cout << i << " ";
  }
  cout << endl;

  // Reverse iterator
  /* auto reverseBegin = vec.rbegin();
  auto reverEnd = vec.rend();
  for (auto i = reverseBegin; i < reverEnd; i++)
  {
    cout << *i << " ";
  } */
}

int main()
{
  explainVector();
  return 0;
}