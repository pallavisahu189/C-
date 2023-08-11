// Given the length and breadth of a rectangle, write a program to find whether numerically the area of
// the rectangle is greater than its perimeter.

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter length and breadth : ";
    cin>>a>>b;
    
    int area = a*b;
    int perimeter = 2 * (a+b);
    if(area>perimeter){
        cout<<"area is greater than perimeter";
    }
    else{
        cout<<"perimeter is greater than area";
    }
}