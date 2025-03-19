#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int N, Q;
    cin >> N >> Q;
    string x, y,S;
    cin >> x;
    int c, d, mx, mn;
    for(int i = 0; i<Q; i++)
    {
        cin >> y;
        if (y == "pop_back")
            x.pop_back();
        if (y == "front")
            cout << x.front() << endl;
        if (y == "back")
            cout << x.back() << endl;
        if (y == "sort")
        {
            cin >> c >> d;
            mx = max(c, d);
            mn = min(c, d);
            sort(x.begin() + mn - 1, x.begin() + mx);
        }
        if (y == "reverse")
        {
            cin >> c >> d;
            mx = max(c, d);
            mn = min(c, d);
            reverse(x.begin() + mn - 1, x.begin() + mx);
        }
        if (y == "substr")
        {
            cin >> c >> d;
            mx = max(c, d);
            mn = min(c, d);
            cout << x.substr(mn - 1, mx - mn + 1) << endl;
        }
        if (y == "push_back")
        {
            cin >> S;
            x.push_back(S[0]);
        }
        if (y == "print")
        {
            cin >> c;
            cout << x[c - 1] << endl;
        }
    }
    return 0;
}
