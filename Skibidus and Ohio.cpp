#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n; 
    string s;
    cin >> n; 
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int temp = 0;
        for (int i = 1; s[i] != '\0'; i++) 
        {
            if (s[i] == s[i-1]) 
            {
                temp = 1;
                break;
            }
        }
        if (temp) 
        {
            cout << 1;
        } 
        else 
        {
            int flag;
            for (flag = 0; s[flag] != '\0'; flag++) ;
            cout << flag;
        }
        cout << " "<<endl;
    }
    return 0;
}


