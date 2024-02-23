#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
float sum(float a, float b){
    return a+b;
}
float sum(float a, float b, float c){
    return a+b+c;
}
int main(){
    int a, b, c, result;
    cout<<"Enter two number: ";
    cin>>a>>b>>c;
    result = sum(a,b);
    cout<<"sum of number : "<<result;
    return 0;
}