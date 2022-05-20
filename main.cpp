#include <iostream>
using namespace std;

int main() {
  float number1 = 6.2;
  float number2 = 7.3;

  float *fptr;
  fptr = &number1;
  cout << "fptr value :" << *fptr << endl;
  number2 = *fptr;
  cout << "number2 after assinging *fptr :" << number2 << endl;
  cout << "Address of number1(using fptr) :" << fptr << endl;
  cout << "Address of number1(using &number1) :" << &number1 << endl;
  if ( &number1 == fptr ) {
    cout << "success" << endl;
  }
  
}