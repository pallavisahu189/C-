#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter the base  : ";
    cin>>a;
    cout << "Enter the power  : ";
    cin>>b;
    bool flag = true;  // true means power position 
    if(b<0){
        flag = false; // false-> power is negative
        b = -b;
    }

    float power = 1;
    for(int i=1; i<=b; i++){
        power = power*a;
    }

    if(flag==false){
        power = 1/power;
        b = -b;
    }

    if(a==0 && b==0) cout<<"Not defined"<<endl;
    else{
    cout<<a<<" raised to the power "<<b<<" is "<<power;
    }    

}