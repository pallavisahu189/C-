// 1
// 0 1
// 1 0 1
// 0 1 0 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row  number : ";
    cin>>n;
    // int a;
    // for(int i=1; i<=n; i++){
    //     if(i%2!=0) a=1;    //row num odd hai to 1 se start ho 
    //     else a=0;  ////row num even hai to 0 se start ho 
    //     for(int j=1; j<=i; j++){
    //         cout<<a<<" ";
    //         //flipping
    //         if(a==1) a=0;
    //         else a=1;
    //     }
    //     cout<<endl;
    // }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0) cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}