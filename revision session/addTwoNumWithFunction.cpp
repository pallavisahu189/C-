#include<iostream>
using namespace std;
int add(int a , int b){
    int sum = a + b;
    return sum;

}
int main(){
    int a = 13;
    int b = 15;
    add(a,b);
    cout<<"sum of two number"<<" "<< add(a,b)<<endl;
    return 0;

}