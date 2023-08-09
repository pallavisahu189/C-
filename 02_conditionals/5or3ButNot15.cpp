//Take positive integer input and tell 
//if it is divisiable by  5 or 3 but not divisiable by 15.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
// if((n%3==0 || n%5==0) && n%15!==0){
//     cout<<"The number is divisible by 3 or 5 not 15";
// }
// else{
//     cout<<"Not matching condition";
// }

// nested if
if(n%3==0 || n%5==0){
    if(n%15!=0){
        cout<<"The number is divisible by 3 or 5 not 15";
    }
    else{
        cout<<"Not matching condition";
    }
}
else{
        cout<<"Not matching condition";
    }

}