//Display this AP - 100, 97, 94..upto all terms which are positive.
                    //100 97 94 ....7 4 1 - 34 terms

                    
#include<iostream>
using namespace std;
int main(){ 

//     //formulas - An= A + (n-1) *d
//                 //A34 = 100 + (34-1)* (-3)

//METHOD 1

// int a = 100;                
// for(int i=1; i<=34; i++){
//          cout<<a<<endl;
//          a = a - 3;
//     //  }


    
    
    //METHOD 2

    // int a = 100;
    // for(int i=1; a>0; i=i++){
    //      cout<<a<<endl;
    //      a = a-3;
    //  }



    //METHOD 3

     for(int i=100; i>0; i=i-3){
         cout<<i<<endl;
         
     }
}