#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int futureInvestment (int amount, float interest, int time ) {
  return (amount * pow(1 + (interest / 100), time));

}
int main()
{
  //future investment formula: present value*(1+interest rate)^time
  int amount, time;
  float interest;
  cout << "Enter the amount invested: ";
  cin >> amount;
  cout << "\nEnter the interest rate: ";
  cin >> interest;
  cout << "\nEnter the number of years for which you want to invest: ";
  cin >> time;

  int calculateFutureInvestment = futureInvestment(amount, interest, time);

  cout <<"\nThe amount will be "<<calculateFutureInvestment<<" in "<<time<<" years.";

    return 0;
}