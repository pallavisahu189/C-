#include<iostream>
using namespace std;
int main(){
    cout << sizeof(int)<<endl;
    cout << sizeof(char)<<endl;
    cout << sizeof(float)<<endl;


    // address dekhne ke liye & use krte hai

    int n=5;
    int m=5;
    cout<<&n<<endl<<&m<<endl;

    char c='p';
    cout<<&c;
}