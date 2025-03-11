#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int j = 0;
    for (int i = 0; i <= s.size(); i++)
        {
        if (s[i] == ' '||s[i] == '\0')
        {
            int first = j;
            int last = i - 1;
            while (first < last)
             {
                char temp = s[first];
                s[first] = s[last];
                s[last] = temp;
                first++;
                last--;
            }
            j = i + 1;
        }
    }
    cout <<s<<endl;
    return 0;
}

