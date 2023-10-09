// Print the following pattern
// Input: n = 5
// Output:
//     1
//   1 2 3
//  1 2 3 4 5
// 1 2 3 4 5 6 7

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter number: ";
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n-i-1; ++j) {
            cout << " ";
        }
        for(int j = 0; j < 2 * i + 1; ++j) {
            cout << j+1 << " "; 
        }
        cout << endl;
    }
    return 0;
}