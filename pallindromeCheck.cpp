#include<iostream>
#include<string.h>
using namespace std;
int main()
{

  char word[50];  //variable declaration 
  cout<< "Enter any word: ";  //prints in the console 
  cin >> word;  //waits for the user give input
  cout <<"\nEntered Word: "<<word;

//to convert to uppercase and lowercase
  // cout<< strupr(word);
  // cout<< strlwr(word);

  //stores the entered word in a new variable.
  //is is necessary to do because, if you do strrev(word) it will replace the word in stored in the char word[] variable
  char revStr[50];
  strcpy(revStr, word);  
  if (strcmp(word, strrev(revStr))==0)
  { 
    cout <<"\nWord: "<< word << " is a Pallindrome Word.";
  }
  else
  {
    cout <<"\nWord: "<< word << " is NOT a Pallindrome Word.";
  }
    return 0;
}