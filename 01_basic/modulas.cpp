#include<iostream>
using namespace std;
int main (){
    int a = 5;
    int b = 8;  // if a<b then a % b =a
    int c = a%b;
    cout<<c;

    int p = -5;
    int q = 8;  // (-a) % b = -(a % b)
    int r = a%b;
    cout<<r;

    int m = 5;
    int n = -2;  // a%(-b)= a%b
    int o = a%b;
    cout<<o;

     int m = -5;
    int n = -2;  // (-a) % (-b)= -(a % b)
    int o = a%b;
    cout<<o;
}
