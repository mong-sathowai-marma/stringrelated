#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s); 
    string cleaneds = "";
    for (char c : s) {
        if (isalnum(c)) {
            cleaneds += tolower(c); 
        }
    }
    bool isPalindrome = true;
    for (int first = 0,last = cleaneds.length() - 1; first < last; first++, last--) {
        if (cleaneds[first] != cleaneds[last]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) 
    {
        cout << "YES" << endl;
    } else 
    {
        cout << "NO" << endl;
    }
    return 0;
}
