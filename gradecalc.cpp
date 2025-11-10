#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int score;
    cout << "Enter your
    .
     score (0-100): ";
    cin >> score;

    char grade;
    switch (int(ceil(score/10.0))){
        case 10:
            grade = 'A';
            break;
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            grade = 'F';
            break;
        default:
            cout << "Invalid score entered." << endl;
    }

    cout << "Your grade is: " << grade << endl;
    return 0;
    // if (score >= 90 && score <= 100) {
    //     grade = 'A';
    // } else if (score >= 80 && score < 90) {
    //     grade = 'B';
    // } else if (score >= 70 && score < 80) {
    //     grade = 'C';
    // } else if (score >= 60 && score < 70) {
    //     grade = 'D';
    // } else if (score >= 0 && score < 60) {
    //     grade = 'F';
    // } else {
    //     cout << "Invalid score entered." << endl;
    //     return 1;
    // }

    // cout << "Your grade is: " << grade << endl;
    // return 0;
}