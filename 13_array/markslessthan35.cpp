// Qu. Given an array of marks of students, if the
// mark of any student is less than 35 print its roll
// number. [roll number here refers to the index of the
// array.]

#include<iostream>
using namespace std;
int main(){
    int marks[6];
    //input
    for(int i=0; i<=5; i++){
        cin>>marks[i];
    }

    for(int i=0; i<=5; i++){     // jis bhi index me 35 se km number honge us index ko print krna.
        if(marks[i]<35)cout<<i<<" ";
    }
}
