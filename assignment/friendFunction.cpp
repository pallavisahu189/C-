#include<iostream>
using namespace std;
class ankush{
    int money = 20;
    private:
    friend void rohan(ankush, ankit);
};
class ankit {
    int money = 50;
    private:
    friend void rohan(ankush, ankit);
};
int main(){
    ankush obj1;
    ankit obj2;
    rohan(obj1, obj2);
}
void rohan(ankush r1, ankit r2){
    cout<<"sum of money = "<< r1.money + r2.money;
}