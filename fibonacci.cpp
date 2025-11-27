#include<iostream>
using namespace std;
int main(){
int a=0;
int b =1;
int f;
for(int i=1;i<=15;i++){
    cout<<a<<" ";
    f=a+b;
    a=b;
    b=f;
    
}
cout <<f;


return 0; 
}