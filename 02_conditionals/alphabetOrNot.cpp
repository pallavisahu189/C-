//Write a program to check whether a character is an alphabet not.

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the charater : ";
    cin>>ch;
    // a, b ,c ,d.....A, B, C ..@ , # ..
    // a to z = 97 to 122
    // A to Z = 65 to 90

//     cout<<ch<<endl;
//     cout<<(int)ch;

    int ascii = (int)ch;
    if(ascii>=97 && ascii<=122){
        cout<<"The character is lowercase alphabet.";
    }

    if(ascii>=65 && ascii<=90){
        cout<<"The character is uppercase alphabet.";
        
    }

    //enter character is a alphabet?
    // char ch;
    // int ascii = (int)ch;
    // if(ascii>=97 && ascii<=122 || ascii>=65 && ascii<=90){
    // cout<<"The character is alphabet.";
    // }
    // else{
    //     cout<<"The character is not alphabet.";
    // }


}
