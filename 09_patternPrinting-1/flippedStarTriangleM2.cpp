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
    // for(int i=1; i<=n; i++){
    //     //space
    //     for(int j=1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     // star
    //     for(int k=1; k<=i; k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // method 2

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i+j)>=n+1)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}   // method 2 har baar nhi use hota h upar vala code jada aacha hai