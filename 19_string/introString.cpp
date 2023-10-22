//string are basically character array

#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[5] = {'a','b','c','d','e'};
    for(int i=0; i<5; i++){
        cout<<str[i]<<" ";
    }
    cout<<"abc\tdef"<<endl;   // \t = tap(4 space)

    cout<<"abc\ndef"<<endl;   //\n = next line

    cout<<"abc\0def";       // null charactor = 0  (\0 ko dekhne se machine aage ke sttring ko print nhi krta h)
}