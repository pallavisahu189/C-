//Ques : Write a function to compute the greatest
//common divisor of two given numbers

#include<iostream>
using namespace std;

int gcd(int a, int b){
    int hcf = 1;
    for(int i=min(a,b); i>=1; i--){ //i is a common factor
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a;
    cout<<"Enter 1st num : ";
    cin>>a;
    int b;
    cout<<"Enter 2nd num : ";
    cin>>b;
    cout<<gcd(a,b);
}