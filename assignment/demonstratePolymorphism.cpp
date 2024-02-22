#include<iostream>
using namespace std;
class fruit{
    public:
    void eat(){
        cout<<"Eating fruit";
    }
};
class apple: public fruit{
    public:
    void eat(){
        cout<<"Eating apple";
    }
};
int main(){
    fruit f;
    f.eat();
    return 0;
}