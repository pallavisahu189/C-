//print the factorial of a given number 'n'   1*2*3*4*5----n = n!
                                                    // 0! = 1
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the number : ";
    cin>>n;
    int product = 1;
    for(int i=1; i<=n; i++){
        product *= i;
    }
    cout<<product;
}