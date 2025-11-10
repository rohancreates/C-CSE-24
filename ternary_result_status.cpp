#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){

    //example of ternary operator

    double marks;
    cout << "Enter your marks here: ";
    cin >> marks;
    marks >= 40 ? cout << "you have passed" << '\n' : cout << "you have failed" << '\n';
return 0;}
