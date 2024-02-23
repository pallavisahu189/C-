#include<iostream>
using namespace std;
inline int sum(int, int);

int main(){
    int a, b, result;
    cout<<"Enter two number : ";
    cin>>a>>b;
    result = sum(a,b);
    cout<<"Sum of two number is = "<<result;
}
int sum(int a, int b){
    return a+b;
}