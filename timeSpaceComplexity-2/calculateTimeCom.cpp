#include<iostream>
using namespace std;
int main(){
    int n=5;
    int c = 0;
    for(int i=1; i<=n; i+=i){
        for(int j=0; j<i; j++){
            c++;
        }
        cout<<c;
    }
}