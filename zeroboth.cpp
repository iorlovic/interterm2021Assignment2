/*
Ivan Orlovic
2352727
Dr. German
Assignment 2
#2 zerobooth.cpp
Problem 2(zeroboth.cpp):Implement a void function called zeroBoth that has two call-by-reference parameters,
both of which are variables of type int, and sets thevalues of both variables to 0.
*/

#include <iostream>

using namespace std;

// function zeroBoth. Makes both of the variables equal to 0.
// Here we define the function zeroBoth with 2 parameters
void zeroBoth(int &var1, int &var2){

  var1 = 0; // var1 is equal to 0
  var2 = var1; // sinze var 1 is already equal to 0 then I can just make var2 equal to var 1;
  cout << "After zeroBoth the values are: " << var1 << " and " << var2 << endl; // This will display the Valyes of the ints after zeroBoth() is performed

  return; // end the code
}



int main(){

  int var1;
  int var2;

  cout << "Enter two integer values for variables. Click enter after each: " << endl;
  cout << "First int: " << endl;
  cin >> var1; // take in var1
  cout << "Second int: " << endl;
  cin >> var2; // take in var 2

  cout << "Prior to zeroBoth that values are: " << var1 << " and " << var2 << endl;

  zeroBoth(var1,var2); // Perform zeroBoth!

  return 0;
}
