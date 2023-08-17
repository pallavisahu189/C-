#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<arr<<endl;         //ye line
    //cout<<&arr<<end;         // ye line
    cout<<&arr[0]<<endl;     // or ye line tino array ke 0th address ko print krta h or 0th address hi array ka address hotaa h
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;


}


// 0x7fffd7a89610                array me address continue hota h 
// 0x7fffd7a89614               4-byte ka gap hota h
// 0x7fffd7a89618
// 0x7fffd7a8961c
// 0x7fffd7a89620