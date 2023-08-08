//Take positive integer iinput and tell 
//if it is divisible by 5 and 3

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    // if(n%5==0 && n%3==0){
    //     cout<<"it is divisible by 5 and 3";
    // }

    //OR

    if(n%15==0){
        cout<<"it is divisible by 5 and 3";
    }
    else{
        cout<<"it is not divisible by 5 and 3";
    }
}