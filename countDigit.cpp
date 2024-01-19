#include<iostream>
#include<string>
using namespace std;
int main()
{
  int num, c=0;
  cout << "Enter a number: ";
  cin >> num;
  while (num!=0 || num>0)
  {
    num= num/10;
    c++;
  }
  cout<< "Total Digit: "<< c;
   
    return 0;
}