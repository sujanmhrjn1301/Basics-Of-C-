#include<iostream>
#include<string>
using namespace std;
int main()
{
  int num;
  int fact=1;
  cout << "Enter a number: ";
  cin >> num;
  for(int i=1; i<=num; i++) //runs untill i is equals to number
  {
    fact*=i;
  }
  cout<< "Factorial: "<<fact;


 
    return 0;
}