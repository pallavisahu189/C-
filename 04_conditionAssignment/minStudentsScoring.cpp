//If the marks of A, B and C are input through the keyboard, write a program to determine the student
//scoring the least marks.

#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter first scoring marks : " <<endl;
    cin>>a;
    cout<<"Enter second scoring marks : "<<endl;
    cin>>b;
    cout<<"Enter third scoring marks : "<<endl;
    cin>>c;
    if((a<b) && (a<=c)){
        cout<<a<<" is least marks";
    }
    else if((b<a) && (b<=c)){
        cout<<b <<" is least marks";
    }
    else{
        cout<<c<< " is least marks";
    }
}