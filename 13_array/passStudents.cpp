// jis students ke number 33 se jayda h uska index print kro

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of students : ";
    cin>>n;

    int marks[n];
    cout<<"Enter students marks : ";
    
    //input
    for(int i=0; i<=n-1; i++){
        cin>>marks[i];
    }

    for(int i=0; i<=n-1; i++){    
        if(marks[i]>=33)cout<<i<<" ";
    }
}