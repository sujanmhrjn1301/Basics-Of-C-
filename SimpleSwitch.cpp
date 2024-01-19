#include<iostream>
using namespace std;
int main()
{
  int day;
  cout << "Enter any number from 1 to 7: ";
  cin>>day;

  switch(day) //switch(kun case lai check garne)
  {
    case 1:
    cout<<"SUN"<<endl;
    break; //terminate garne
    case 2:
    cout<<"MON"<<endl;
    break; //terminate garne
    case 3:
    cout<<"TUE"<<endl;
    break; //terminate garne
    case 4:
    cout<<"WED"<<endl;
    break; //terminate garne
    case 5:
    cout<<"THURS"<<endl;
    break; //terminate garne
    case 6:
    cout<<"FRI"<<endl;
    break; //terminate garne
    case 7:
    cout<<"SAT"<<endl;
    break; //terminate garne
    default:
      cout<<"Invalid Number!!!";

  }
 //the above prints TUE in the console
    return 0;
}