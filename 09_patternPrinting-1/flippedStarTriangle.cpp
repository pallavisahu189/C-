//      *
//    * *
//  * * *
//* * * *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter num of row : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // star
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}