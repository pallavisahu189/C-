//two number are entered through the keyboard. WAP tomfind the value of one number raised to the
//power of another.
// n>=0   m>=0

#include <iostream>
using namespace std;
int main(){
    int n, m;
    cout << "Enter the base  : ";
    cin>>n;
    cout << "Enter the power  : ";
    cin>>m;
    int power = 1;
    for(int i=1; i<=m; i++){
        power = power*n;
    }
    cout<<n<<" raised to the power "<<m<<" is "<<power;
}    