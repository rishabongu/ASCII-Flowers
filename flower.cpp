
/**------------------------------------------
    Program 1: ASCII Flowers
    Prompt for the number of flower layers and display

    Course: CS 141, Fall 2023
    System: Linux_x86_64 and G++
    Author: Risha Bongu 
 ---------------------------------------------**/

#include <iostream>
#include <iomanip>

using namespace std;


int main() {
  // display the prompt to the user
  cout << "Program 1: ASCII Flowers\n"
       << "Choose from the following options:\n"
       << "   1. Display the HELLO graphic\n"
       << "   2. Display The Flower\n"
       << "   3. Exit the program\n"
       << "Your choice -> ";

  // read in the user's choice
  int menu_option;
  cin >> menu_option;

  // handle option to quit
  if (menu_option == 3) {
      exit(0);
  }

  // handle the HELLO graphic choice
  if (menu_option == 1) {
      char frame;
      cout << "Enter your frame character: ";
      cin >> frame;
      //top border
      cout << endl;
      for (int i=0; i<2; i++) {
          cout << setfill(frame) << setw(36) << ' ' << endl;
      }
      //message
      cout << setfill(frame) << setw(3) << right << " "
           << "** ** ***** **    **    *****"
           << setfill(frame) << setw(3) << left << " " << endl
           << setfill(frame) << setw(3) << right << " "
           << "** ** ***** **    **    *****"
           << setfill(frame) << setw(3) << left << " " << endl
           << setfill(frame) << setw(3) << right << " "
           << "** ** **    **    **    ** **"
           << setfill(frame) << setw(3) << left << " " << endl
           << setfill(frame) << setw(3) << right << " "
           << "***** ***** **    **    ** **"
           << setfill(frame) << setw(3) << left << " " << endl
           << setfill(frame) << setw(3) << right << " "
           << "***** ***** **    **    ** **"
           << setfill(frame) << setw(3) << left << " " << endl
           << setfill(frame) << setw(3) << right << " "
           << "** ** **    **    **    ** **"
           << setfill(frame) << setw(3) << left << " " << endl
           << setfill(frame) << setw(3) << right << " "
           << "** ** ***** ***** ***** *****"
           << setfill(frame) << setw(3) << left << " " << endl
           << setfill(frame) << setw(3) << right << " "
           << "** ** ***** ***** ***** *****"
           << setfill(frame) << setw(3) << left << " " << endl
           << right;
      //bottom border
      for (int i=0; i<2; i++) {
          cout << setfill(frame) << setw(36) << " " << endl;
      }
  }
  else if( menu_option == 2) {
    // Prompt for and get the number of flower sections.
    int numberOfSections;
    cout << "Enter number of sections: ";
    cin >> numberOfSections;
    cout << setw(numberOfSections) << " " << "---" << endl;
    for(int x = 1; x <= numberOfSections; x++){
       int y = 0;
       for(y = 1; y < x; y++){
           cout << setfill(' ') << setw(numberOfSections - y + 1) << "{" << setfill(':') << setw(y + 1) << ":" << setfill(':') << setw(y + 1) << "}" << endl;
       }

      // Code to print the middle section of each flower
       if(y == x){
          if(x == numberOfSections){
             cout << "{" << setfill(':') << setw(x + 1) << "@" << setfill(':') << setw(x + 1) << "}" << endl; 
          }else{
            cout << setfill(' ') << setw(numberOfSections - x + 1) << "{" << setfill(':') << setw(x + 1) << "@" << setfill(':') << setw(x + 1) << "}" << endl;
          }
       }

      // Code to print the end section of each flower
       for(y = x - 1; y > 0; y--){
          cout << setfill(' ') << setw(numberOfSections - y + 1) << "{" << setfill(':') << setw(y + 1) << ":" << setfill(':') << setw(y + 1) << "}" << endl;
       }
       cout << setfill(' ') << setw(numberOfSections + 3) << "---" << endl;
    }

    // Code to print the stem by alternating sections
    for(int stem = 0; stem < numberOfSections; stem++){
       if((stem % 2) == 0){
          cout << setfill(' ') << setw(numberOfSections + 4) << "|/\n"
          << setfill(' ') << setw(numberOfSections + 2) << "|" << endl;
       }else if((stem % 2) == 1){
          cout << setfill(' ') << setw(numberOfSections + 3) << "\\|\n"
          << setfill(' ') << setw(numberOfSections + 2) << "|" << endl;
       }
    }
  }
}
