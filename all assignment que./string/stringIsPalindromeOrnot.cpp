// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes

#include <bits/stdc++.h>
using namespace std;
bool check(string &s){
    int i=0, j=(int)s.size()-1;
    while (i <= j){
        if (s[i] != s[j]) return false;
        i++, j--;
    }
}

// Driver Code
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << (check(s) ? "YES" : "NO");
}
