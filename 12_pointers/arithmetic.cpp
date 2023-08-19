#include<iostream>
using namespace std;
int main(){
    int x=7;
    int* ptr = &x;
    cout<<ptr<<endl;  //0x61ff08 address of ptr
    ptr = ptr + 1;
    cout<<ptr<<endl;  // 0x61ff0c


//-------------------------

    //  int x=7;
    // int* ptr = &x;
    // cout<<ptr<<endl;  //0x61ff08 address of ptr
    // ptr++;
    // cout<<ptr<<endl;  // 0x61ff0c


    //--------------------------


    // int x=7;
    // int* ptr = &x;
    // cout<<*ptr<<endl;  
    // (*ptr)++;
    // cout<<*ptr<<endl;  
}