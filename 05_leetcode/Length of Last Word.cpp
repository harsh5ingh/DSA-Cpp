#include <iostream>
using namespace std;

class Solution
{
public:
  int lengthOfLastWord(string s)
  {

    int count = 0;
    bool wordStarted = false;

    for (int i = s.length() - 1; i >= 0; i--)
    {

      if (s[i] == ' ')
      {
        if (wordStarted)
          break;
      }
      else
      {
        wordStarted = true;
        count++;
      }
    }

    return count;
  }
};

int main()
{
  Solution obj;

  string s;
  getline(cin, s); // important for spaces input

  int result = obj.lengthOfLastWord(s);

  cout << result << endl;

  return 0;
}