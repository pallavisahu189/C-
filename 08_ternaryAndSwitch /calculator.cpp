// Write a program to create a calculator that performs basic
// arithmetic operations (add, subtract, multiply, and divide) using switch case
// and functions. The calculator should input two number and an 
// operator from user.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter the problem : ";
    cin>>a>>op>>b;

    // if statement
    // if(op=='+') cout<<a+b;
    // if(op=='-') cout<<a-b;
    // if(op=='*') cout<<a*b;
    // if(op=='/') cout<<a/b;

    // switch statement
    switch(op){
        case '+' :
        cout<<a+b;
        break;

        case '-5/' :
        cout<<a+b;
        break;

        case '*' :
        cout<<a+b;
        break;

        case '/' :
        cout<<a+b;
        break;
    }




}