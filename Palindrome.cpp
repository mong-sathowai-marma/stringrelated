#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int first,last,temp = 0;
    cin >> s;
    for(first = 0, last = s.size() - 1; first < last; first++, last--)
    {
        if (s[first] != s[last])
        {
            temp = 1;
            break;
        }
    }
    
    if (temp == 0)
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }
    return 0;
}

