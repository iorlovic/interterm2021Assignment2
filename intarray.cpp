/*
Ivan Orlovic
2352727
Dr. German
Assignment 2
#1 intarray.cpp
Problem 1(intarray.cpp):Write a program that will read up to ten nonnegative integers into an array called numberArray and
then write/printthe integers back to the screen(console output). For this exercise you need notuse any functions.
*/

#include <iostream>
#include <string>


using namespace std;

int main(){

  int numElements = 10;
  int numberArray[numElements] = {}; // chose to leave the braces empty so I do not have to put in 10 zeros

  cout << "Please provide 10 nonnegative integers for your array. Press enter after each integer is typed." << endl; // asking user for numbers

  for(int i = 0; i < numElements; ++i){ // for loop to iterate through array
    cout << "Enter your desired integer: " << endl; // print out
    cin >> numberArray[i]; // take in

    if(numberArray[i] < 0){ // nested if else loop in order to check if the user is inputting a positive number or not
      cout << "ERROR: Re-enter a new number above 0" << endl;
      cin >> numberArray[i]; // take in re entered number
    }
    else{
      // nothing happens if the number is above 0
    }
  }

  cout << "Your array contains these numbers: " << endl;

  for(int i = 0; i < numElements; ++i){
    cout << numberArray[i] << " ";
  }

  cout << endl; // only for aesthetic purposes

  return 0; // end code 
}
