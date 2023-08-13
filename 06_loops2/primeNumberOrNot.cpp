// WAP to check if a number is prime or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    bool flag = true; // true is prime
    for(int i=2; i<=n-1; i++){
        if(n%i==0){ // i is factor of n
            flag = false; // false means composite
            break;
        }
    }
    if(n==1) cout<<"1 neither prime nor composite";
    else if(flag==true)cout<<n<<" is prime";
    else cout<<n<<" is composite";
}