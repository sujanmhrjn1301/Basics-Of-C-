#include<iostream>
#include<string>
using namespace std;

double min (const double myArray[], int arraySize) {
  double miniValue = myArray[0];
  for (int i=1; i<arraySize; i++) {
    if (myArray[i]< miniValue){
      miniValue = myArray[i];

    }
  }
  return miniValue;
}
int main()
{
  int arraySize = 10;
  double myArray[arraySize];

  cout << "Enter any ten numbers: "; 
  for (int i = 0; i < arraySize; i++) 
  {
    cout << "\nNumber: ";
    cin >> myArray[i];
  }
  //printing all the entered values
  cout <<"\nValues Entered:\n";
  for (int i=0; i<arraySize; i++) 
  {
    cout <<myArray[i]<<", ";
  }
//calling the function min()
double minimumValue = min(myArray, arraySize);
//printing the output
cout << "\nSmallest Value is : " << minimumValue;

  return 0;
}
