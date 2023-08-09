// Take input marks of a student and print
// the grads according to marks:

// 91-100 Excellevt
// 81-90 Very good
// 71-80 Good
// 61-70 Can do better
// 51-60 Average
// 40-50 Below Average
// <40 Fail

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a marks : ";
    int n;
    cin>>n;
    if(n>=91){
        cout<<"Excellent";
    }
    else if(n>=81){
        cout<<"Very good";
    }
    else if(n>=71){
        cout<<"Good";
    }
    else if(n>=61){
        cout<<"Can do better";
    }
    else if(n>=51){
        cout<<"Average";
    }
    else if(n>=40){
        cout<<"Below Average";
    }
    else{
        cout<<"Fail";
    }
}



