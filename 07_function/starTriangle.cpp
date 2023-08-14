// Let’s create new bigger patterns
// Take a, b, c as input and print the following pattern:
// a = 3, b = 4, c = 5
// *
// **
// ***
// *
// **
// ***
// ****
// *
// **
// ***
// ****
// *****


#include<iostream>
using namespace std;
void starTriangle(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    starTriangle(3);
    starTriangle(4);
    starTriangle(5);
}