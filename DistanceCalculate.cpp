#include <iostream>
#include <math.h>

using namespace std;
//function calculates the distance and returns its
float distanceCalculate(float x1,float x2,float y1, float y2) 
{
  float x = x2-x1;  //distance between the x-coordinates
  float y= y2-y1; //distance between the y-coordinates
  float distance = pow(pow(x,2)+ pow(y,2), 0.5); //calculates the distance using distance formula
  return distance;
}
int main() {
  float x1, x2, y1, y2; 

  cout<< "X1: ";
  cin>> x1; //takes and store x1 from the user

  cout <<"X2: ";
  cin >> x2;  //takes and store x2 from the user

  cout <<"Y1: ";
  cin >> y1;  //takes and store y1 from the user

  cout <<"Y2: ";
  cin >> y2;  //takes and storey2 from the user

  float distance = distanceCalculate(x1,x2,y1,y2);
  cout<<"\nThe distance between the entered point is "<<distance;

  return 0;
}