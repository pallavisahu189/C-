#include<iostream>
using namespace std;
void swap(int a, int b){  // agr yha pr &a and &b address ko pass krenge to swap hoga 
    int temp = a;
    a = b;
    b = temp;
    return;
}

int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number : ";
    cin>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}
// ------------number swap nhi hota h kyuki