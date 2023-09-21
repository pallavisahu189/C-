#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    //row ->3   0-2
    //column ->   0-2
    cout<<arr[0][0]<<" ";

    arr[0][0] = 6;
    cout<<arr[0][0];
}