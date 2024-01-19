#include<iostream>
using namespace std;
int main()
{
  int a,b, tempValue;
  a=5;
  b=10;
  cout<<"A: "<<a;
  cout<<"\nB: "<<b;

  tempValue= a;
  a=b;
  b=tempValue;

  // a=a+b;
  // b=a-b;
  // a=a-b;

  cout<<"\n";
  cout<<"\nAfter Swapping";
  cout<<"\nNew Value of A: "<<a;
  cout<<"\nNew Value of B: "<<b;

    return 0;
}