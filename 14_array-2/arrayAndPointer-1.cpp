#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,6};
    int* ptr = arr;
    cout<<ptr<<endl;  /// dono trike se address ko print krte h
    cout<<&arr[0];    // same address ptint hoga
}