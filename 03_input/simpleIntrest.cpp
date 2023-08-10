#include<iostream>
using namespace std;
int main(){
    int principal, time, rate;
    cout<<"Enter principal: ";
    cin>>principal;
    cout<<"Enter time: ";
    cin>>time;
    cout<<"Enter rate: ";
    cin>>rate;
    int simpleIntrest = (principal*rate*time)/100;
    cout<<"simple Intrest = "<<simpleIntrest;
}
