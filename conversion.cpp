#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.size();i++)
   {
    int a=s[i];
    if(a>=97 && a<=122)
    {
      s[i]=s[i]-32;
        cout<<s[i];
    }
    if(a>=65 && a<=90)
    {
      s[i]=s[i]+32;
        cout<<s[i];
    }
    if(a==',')
        {
            cout<<" ";
    }
  }
  return 0;
}