// Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4
// Input : "abdc"
// Output : 3



#include <iostream>
#include<string>
using namespace std;

// Iterative CPP program to count total number 
// of consonants  
#include <iostream> 
using namespace std; 
  
// Function to check for consonant 
bool isConsonant(char ch){ 
    // To handle lower case 
    ch = toupper(ch); 
  
    return !(ch == 'A' || ch == 'E' ||  ch == 'I' || ch == 'O' ||  ch == 'U') && ch >= 65 && ch <= 90; 
} 
  
int totalConsonants(string str) { 
    int count = 0; 
    for (int i = 0; i < str.length(); i++)  
        // To check is character is Consonant 
        if (isConsonant(str[i])) 
            ++count; 
    return count; 
} 
  
// Driver code 
    int main() { 
    string str;
    getline(cin,str); 
    cout << totalConsonants(str); 
    return 0; 
}