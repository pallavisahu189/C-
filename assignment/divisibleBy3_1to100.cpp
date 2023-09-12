//print all numbers from1 to 100 that are divisible by 3

#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<=100; i++){
        if(i%3==0) cout<<i<<" ";
    }
}