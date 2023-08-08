//Take positive integer input and tell if it is divisible by 5 and 3

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n%3==0){
        if(n%5==0){
            cout<<"number divisible by 3 and 5";
        }
        else{
            cout<<"number is not divisible by 3 and 5";
        }
    }
    else{
            cout<<"number is not divisible by 3 and 5";
        }
}