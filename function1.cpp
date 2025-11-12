#include <iostream>
using namespace std;


// Function Defination

void printHello()
{
  cout << "hello\n";
}

// sum of 2 numbers

double sum(double a, double b) {
  double s = a + b;
  return s;
}

int main()
{
  // Function Call/Invoke
  printHello();

  cout<<sum(5.56,6.23)<<endl;
  return 0;
}