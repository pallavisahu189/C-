#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter letter: ";
    cin>>l;
    switch(l){
        case 'a':
        cout<<"It is vowel letter.";
        break;
        case 'e':
        cout<<"It is vowel letter.";
        break;
        case 'i':
        cout<<"It is vowel letter.";
        break;
        case 'o':
        cout<<"It is vowel letter.";
        break;
        case 'u':
        cout<<"It is vowel letter.";
        break;
        default:
        cout<<"It is consonant letter.";
        break;
    }
    return 0;
}