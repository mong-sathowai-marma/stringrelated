#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    char c='h';
    int temp = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==c)
        {
            temp++;
            if(temp == 1)
                {
                c = 'e';
                }
            else if(temp == 2)
                {
                    c = 'l';
                }
            else if(temp==3)
                {
                    c= 'l';
                }
            else if(temp== 4)
                {
                    c = 'o';
                }                 
            else if(temp == 5)
                break;
        }
    }
    if(temp == 5)
    {
        cout<<"YES";
    } 
    else
    {
        cout<<"NO";
    }
    return 0;
}