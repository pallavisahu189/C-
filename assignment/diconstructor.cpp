#include<iostream>
using namespace std;
class display{
    public:
    int a= 500;
    int b= 200;
    ~display(){
        cout<<"a= "<<a<<" and b = "<<b;
    }
};
int main(){
    display obj;
}