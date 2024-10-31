// Name: Ethan De La Rosa

#include <iostream>
using namespace std;
//User enters the grades to get the average
int main() {
    // Declairing  the variables for the grades
    double grade1, grade2, grade3, grade4;
    //telling the user to enter the grades
    cout << "Please enter the first grade: ";
    cin >> grade1;
    cout << "PLease enter the second grade: ";
    cin >> grade2;
    cout << "PLease enter the Third  grade: ";
    cin >> grade3;
    cout << "PLease enter the fourth grade: ";
    cin >> grade4;

    //Now to calculate the average grade
    double average = (grade1 + grade2 + grade3 + grade4) / 4.0;

    //Now to display the grade with a decimal
    cout << "The average garde is " << average << endl;

    return 0;
}