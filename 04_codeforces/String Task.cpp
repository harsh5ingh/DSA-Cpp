#include<iostream>
#include<cctype>
using namespace std;


int main(){
  string s;
  cin >> s;
  string result = "";
  for (int i = 0; i < s.length(); i++)
  {
    char c = tolower(s[i]);
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'y' && c != 'u' )
    {
      result += ".";
      result += c;
    
  }
}

  cout << result;

}