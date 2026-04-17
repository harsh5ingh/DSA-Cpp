#include<bits/stdc++.h>
using namespace std;

int main(){
  int age;
    cout << "What is your age: ";
  cin >> age;
    cout << "Your age is: " << age << endl;
  if (age>=18)
  {
    cout << "You are an adult";
  }
  else if(age<18){
    cout<< "You are a minor";
  }
  return 0;
}