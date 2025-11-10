#include<iostream>
using namespace std;
int main(){
    cout<<"faltu calulator mei apka suagat hai!"<< endl;
    cout<<"apna naam bataiye"<<endl;
    string name;
    cin >> name;
    cout<<"bada bakwas naam hai!"<< endl;
    cout<<"khair choro, mujhe kya,"<<endl;
    cout<<"lo karlo calculate jo bhi krna hai"<<endl;
    double a,b;
    cout << "enter a:"<<endl;
    cin >> a;
    char symbol;
    cout <<"enter symbol (+,-,/,*)"<<endl;
    cin >> symbol;
    cout << "enter b:"<<endl;
    cin >> b;

    switch(symbol){
        case '+':
        cout<<"jaa me nahi krunga add"<<endl;
        cout << "chal chor tu bhi kya yaad rakhega yeh le: "<<endl;
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<"subtraction karega? bhak!"<<endl;
        cout << "chal chor tu bhi kya yaad rakhega, yeh le: " << a-b<<endl;
        break;
        case '/':
        cout << "its division: "<<a/b<<endl;
        break;
        case '*':
        cout << "its multiplication: " << a*b<<endl;
        break;
        default:
        cout<<"bhak bsdk"<<endl;
        break;
    }
    
}