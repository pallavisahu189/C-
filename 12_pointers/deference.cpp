#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int* p = &x;
    cout<<*p;

    //////playing with pointer

    int y = 122;
    int* p = &y;
    cout<<y<<endl;

    *p = 120;
    cout<<y;
}