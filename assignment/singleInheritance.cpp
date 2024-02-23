#include<iostream>
using namespace std;
class first{
    public:
    void display(){
        cout<<"this display is inside the first class"<<endl;
    }
};
class second: public first{
    public:
    void show(){
        cout<<"show is inside the second class"<<endl;
    }
};
int main(){
    first f;
    f.display();
    second s;
    s.display();
    s.show();
}