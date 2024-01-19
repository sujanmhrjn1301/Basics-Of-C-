// check character
#include<iostream>
using namespace std;
int main()
{
  char character;
  cout << "Enter a character: ";
  
  cin >> character;
  
  switch (character)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    cout <<character<<" is a Vowel.";
    break;
  default:
    cout <<character<<" is Consonant.";
  }
 
    return 0;
}