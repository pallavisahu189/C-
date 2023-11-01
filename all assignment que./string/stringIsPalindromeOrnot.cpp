// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes

// C++ program for the above approach
#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

// Function to check whether
// the string is palindrome
string isPalindrome(string S){
	// Stores the reverse of the
	// string S
	string P = S;

	// Reverse the string P
	sort(P.begin(), P.end());

	// If S is equal to P
	if (S == P) {
		// Return "Yes"
		return "Yes";
	}
	// Otherwise
	else {
		// return "No"
		return "No";
	}
}

// Driver Code
int main(){
	string S;
    cout<<"Enter palindrome: ";
    getline(cin,s);
	cout << isPalindrome(S);

	return 0;
}
