#include <iostream>
#include <string>

using namespace std;

//checks if the entered year is leap year or not
bool isLeapYear(int year){
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

//function for days in a month
int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1: 
        case 3:  
        case 5:  
        case 7: 
        case 8:  
        case 10: 
        case 12: 
            return 31;
        case 4:  
        case 6:  
        case 9:  
        case 11: 
            return 30;
        case 2:  
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1;  
            //default value -1 indicating an error
    }
}

int main() {

  int year, month;

  cout <<"Enter a year: ";
  cin >> year;

  if (isLeapYear(year)) {
        cout << "It's a Leap Year.\n";
    } else {
        cout << "It's not a Leap Year.\n";
    }

  cout <<"Enter a month (in number): ";
  cin >> month;

  if (month >12 || month < 1) {
    cout <<"Invalid Month";
  } else {
    //calling the getDaysInMonth function
    int daysInMonth = getDaysInMonth(month, year);
    cout << "Year: "<<year<<"\nMonth: "<<month<< "\nDays: "<<daysInMonth;
  }

  return 0;
}