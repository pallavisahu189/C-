// write a programm to input month number and
// print total number of days in month using swich case.

#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter month number : ";
    cin>>x;
    switch(x){
        case 1: //january
        cout<<"31";
        break;

         case 2:  //february
         cout<<"28";
         break;

         case 3:  //march
         cout<<"31";
         break;

         case 4:  //april
         cout<<"30";
         break;

         case 5:   //may
         cout<<"31";
         break;

         case 6:   //june
         cout<<"30";
         break;

         case 7:    //july
         cout<<"31";
         break;

         case 8:  //august
         cout<<"30";
         break;

         case 9:   //september
         cout<<"31";
         break;

         case 10:  //october
         cout<<"30";
         break;

         case 11:  //navember
         cout<<"31";
         break;

         case 12:  //Dec
         cout<<"30";
         break;

         default:
         cout<<"Not month";
    }
}