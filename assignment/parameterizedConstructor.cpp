#include<iostream>
using namespace std;
class display{
    public:
    int a,b;
    display(int x, int y){
        a = x;
        b = y;
    }
    void show(){
        cout<<"a = "<<a<<" and b = "<<b;
    }
};
int main(){
    display obj(20,30);
    obj.show();
}