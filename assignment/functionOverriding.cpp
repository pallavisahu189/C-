#include<iostream>
using namespace std;
class A{
    public:
    void f(){
        cout<<"this is basse class"<<endl;
    }
};
class B: public A{
    void f1(){
        cout<<"this is child class"<<endl;
    }
};
int main(){
    B obj;
    obj.f();
    return 0;
}