// take positive integer input and tell if it is divisible by 5 or not.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n%5==0){
        cout<<"this number is divisiable by 5";
    }
    else{
        cout<<"this number is not divisible by 5";
    }
}