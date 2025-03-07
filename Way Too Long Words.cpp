#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        if(s.size()>10)
        {
              cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}
