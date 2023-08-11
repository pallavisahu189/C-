// Given the radius of the circle, predict whether numerically the area of this circle is larger than the
// circumference or not.

#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter circle of redius : ";
    cin>>r;
    float pi = 3.14;
    float area = pi * r *r;
    float perimeter = 2 * pi *r;
    if(area>perimeter){
        cout<<"Therefore area > perimeter";
    }
    else{
        cout<<"Therefore area < perimeter";
    }
}