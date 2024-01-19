#include <iostream>
using namespace std;

//checks the highest score in the array
int highestScore(int studentScore[], int totalStudent) {
 int highScore = studentScore[0]; //initialize highscore with index 0 value
 for (int i=1; i<totalStudent; i++) {
    if (studentScore[i]> highScore) {
      highScore = studentScore[i]; //update highscore if a higher score is found
    }
 }
 return highScore; //return the maximum score
}
int main () {
  //define the size of an array
  int totalStudent = 5;
  //creating empty array to store studentNum and their scores
  int studentNum[totalStudent];
  int studentScore[totalStudent];

  //input studentNumber 
  cout << "Enter " << totalStudent << " Integers";
  for (int i=0; i<totalStudent; i++) {
    cout << "\nStudent Number: ";
    cin >> studentNum[i];

    cout << "Student Score: ";
    cin >> studentScore[i];
    //checks if score is between 0 and 100
    if (studentScore[i]>100 || studentScore[i]<0) {
      cout << "Invalid Score";
      i--;  //decresease by -1 if score is invalid
    }
  }

//calling the highScore function
int studentHighScore = highestScore(studentScore, totalStudent);

//printing all the details of student number along with their score
  for (int i=0; i<totalStudent; i++) {
  cout <<"\nStudent Number: "<<studentNum[i]<<" Score: "<<studentScore[i];
}
  cout << "\nHighest Score: " << studentHighScore << "\n" ;

  return 0;
}