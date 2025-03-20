#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    getline(cin, s);
    long long int m, n, p;
    if ((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z')) 
        { 
            n = 1;
        }
    else 
        {
            n = 0;
        }
    m = s.size();
    for (p = 0; p < m; p++) 
    {
        if ((s[p] == ' ' || s[p] == '?' || s[p] == ',' || s[p] == '.' || s[p] == '!') && 
            ((s[p + 1] >= 'a' && s[p + 1] <= 'z') || (s[p + 1] >= 'A' && s[p + 1] <= 'Z'))) 
            {
               n++;
            }
    }
    cout << n;
    return 0;
}
