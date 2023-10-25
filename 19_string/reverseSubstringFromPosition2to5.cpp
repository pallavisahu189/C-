// input a string of length greater than 5 and reverse the substring from position  2 to 5 using
// inbuilt function.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "raghav";
   
    reverse(str.begin()+1,str.end()+5);
    cout<<str<<endl;
}