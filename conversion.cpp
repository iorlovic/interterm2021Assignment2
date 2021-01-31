/*
Ivan Orlovic
2352727
Dr. German
Assignment 2
#4 conversion.cpp
Write a program that will read in a length in feet and inches and output the equivalent length in meters and centimeters.
Use at least threefunctions: one for user input,one or more for calculating, and one for output(console).
Include a loop that lets the user repeat this computation for new input values until the user says he or she wants to end the program(user has to type exit).
There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
*/

#include <iostream>
#include <string>

using namespace std;

void userIN(double& uFeet, double& uInches){

  uFeet = 0.0; // user entered feet
  uInches = 0.0; // user entered inches

  cout << "This is a conversion program!" << endl;
  cout << "Please enter a height in feet and in inches." << endl;
  cout << "Feet: " << endl;
  cin >> uFeet;
  cout << "Inches: " << endl;
  cin >> uInches;

}

double calculations(double& uFeet, double& uInches, double& uMeters, double& uCentiMeters){

  uMeters = 0.0; // calculated meters
  uCentiMeters = 0.0; // calculated centimeteers

  uMeters = (uFeet * 0.3048); // only feet to meters

  uCentiMeters = (uInches * 2.54); // only inches to centimeters

// used for testing
  //cout << "Meters: " << uMeters << endl;
  //cout << "Centimeters: " << uCentiMeters << endl;

  return (uMeters); // return these values since they were calculated
  return (uCentiMeters);
}

double fullCalc(double& uFeet, double& uInches, double& uMeters, double& uCentiMeters, double& fullFeet, double& fullInches, double& fullMeters, double& fullCenti){

  fullFeet = 0.0; // calculated feet total
  fullInches = 0.0; // calculated inches total
  fullMeters = 0.0; // calculated meters total
  fullCenti = 0.0; // calculated centimeters total

  fullFeet = (uFeet + (uInches * 0.083)); // convert inches and add to feet

  fullInches = (uInches + (uFeet * 12)); // convert feet and add to inches

  fullMeters = ((uFeet * 0.3048) + (uInches * 0.0254)); // convert both feet and inches to meters

  fullCenti = ((uInches * 2.54) + (uFeet * 30.48)); // conver both feet and inches to centimeters

// return all of the calculated statements
  return (fullFeet);
  return (fullInches);
  return (fullMeters);
  return (fullCenti);

}

// split this out into two functions just for ease of coding and typing

void userOUT(double uFeet, double uInches, double uMeters, double uCentiMeters){

  cout << "Based on our conversion calculations we have come up with the following: " << endl;
  cout << "From Feet to Meters you have " << uMeters << " meters." << endl;
  cout << "From Inches to Centimeters you have: " << uCentiMeters << " centimeters." << endl;

}

void userOutFull(double fullFeet, double fullInches, double fullMeters, double fullCenti){

  cout << endl;
  cout << "From the height you have entered we have also calculated a few extra things: " << endl;
  cout << "In just feet alone from the height you entered you have " << fullFeet << " feet." << endl;
  cout << "In just inches alone from the height you entered you have " << fullInches << " inches." << endl;
  cout << "In just meters alone from the height you entered you have " << fullMeters << " meters." << endl;
  cout << "In just centimeters alone from the height you entered you have " << fullCenti << " centimeters." << endl;

}


int main(){
// all of the doubles and string for users answer
  double uFeet;
  double uInches;
  double uMeters;
  double uCentiMeters;

  double fullFeet;
  double fullInches;
  double fullMeters;
  double fullCenti;

  string answer;

do { // will always ask user if they want to start the program or exit

  cout << "Do you want to start the program? (Type yes or exit): " << endl;
  cin >> answer;

  if(answer == "yes" || answer == "Yes"){
    userIN(uFeet,uInches);

    calculations(uFeet,uInches,uMeters,uCentiMeters);

    fullCalc(uFeet, uInches, uMeters, uCentiMeters, fullFeet, fullInches, fullMeters, fullCenti);

    userOUT(uFeet,uInches,uMeters,uCentiMeters);

    userOutFull(fullFeet, fullInches, fullMeters, fullCenti);
  }
  else if (answer == "exit" || answer == "Exit"){ // else the code ends
    break;
  }

  else{

    cout << "Unfortunately you mistyped the response. Can you try again. (Yes or Exit):" << endl;
    cout << "Do you want to start the program? (Type yes or exit): " << endl;
    cin >> answer;

  }
}
  while(answer == "yes" || answer == "Yes");

return 0;
}
