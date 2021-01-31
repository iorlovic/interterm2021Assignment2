/*
Ivan Orlovic
2352727
Dr. German
Assignment 2
#3 salestax.cpp
Implement a function called addTax.
The function addTax has two formal parameters: taxRate(float), which is the amount of sales tax expressed as a percent;
and cost(float), which is the cost of an item before tax.
The function returnsthe value(float)of cost so that it includes sales tax.
*/

#include <iostream>

using namespace std;

float addTax(float taxRate, float cost){

  taxRate = 0.0;
  cost = 0.0;
  //float taxMoney = 0.0f;
  //float value = 0.0f;

  float taxMoney = (cost * (taxRate*(1.0/100)));

  float value = (cost - taxMoney);

  //cout << "Tax money: " << taxMoney << endl;

  return (value);
}

int main(){

  float cost = 50.0f;
  float taxRate = 10.0f;
  float value;
  float taxMoney;
/*
  cout << "What is the Cost of your item?" << endl;
  cin >> cost;

  cout << "Now what is the tax rate you are being charged? (Do not include the percentage sign)" << endl;
  cin >> taxRate;

*/
  addTax(taxRate,cost);

  cout << "The value of cost after sales tax for your purchase is: " << value << endl;
  cout << "Overall you paid $" << taxMoney << " in tax dollars." << endl;

  cout << "updated" << endl;


  return 0;

}
