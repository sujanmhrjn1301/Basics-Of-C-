#include<iostream>
using namespace std;

float seriesPattern(float sum)
{
  cout<<"\n"; //blank line
  for (float n=1;n<=49; n++) //stating of the for loop from 1st term to 49th term
  {
    float seriesPattern = (2*n-1)/(2*n+1); //pattern of 1/3+ 3/5+ 5/7+ 7/9+ 9/11+ 11/13+ ...+95/97+97/99
    cout<<"S"<<n<<"th: "<<seriesPattern<<endl; //prints out the all pattern. total 49 terms
    sum+=seriesPattern;  //summation of  the series
  }
  return sum;
}
int main()
{ 
  float sum=0;  //initializing sum
  float SeriesSum= seriesPattern(sum);
  
  cout <<"\n";  //blank line
  cout<<"Result of the Sum is given below"<<endl; //prints the result heasding
  cout<<"The Sum of the given series is "<<SeriesSum<<"."; //prints the final sum
    return 0;
}