#include<bits/stdc++.h>
using namespace std;
int main() {
  int age;
  cout << "What is your age: ";
  cin >> age;
    cout << "Your age is: " << age << endl;
  if (age<18) {
    cout << "not eligible for job";
  }
    else if(age >=18 && age <= 54) {
      cout << "eligible for job";
    }
    else if(age >= 55 && age <= 57) {
    cout << "eligible for job, but retirement soon";
    }
    else {
      cout << "retirement time";
    }
    return 0;
  }