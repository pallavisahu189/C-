#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,5,2,6,9};
    int* ptr = arr;
    for(int i=0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; //pointing ptr first element
    *ptr = 8;   //ptr[0] = 8
    ptr++;      // pointing 2nd element
    *ptr = 9;   //2nd element is 9
    ptr--;     //pir se 1st element me chla gya

    cout<<endl;
    for(int i=0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr;
}