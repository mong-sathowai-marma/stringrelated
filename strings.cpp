
#include<iostream>
#include<string>
using namespace std;
int main()
{
  string a,b,temp;
  cin>>a>>b;
 cout<<a.size()<<" "<<b.size()<<endl;
 cout<<a+b<<endl;
 temp[0]=a[0];
 a[0]=b[0];
 b[0]=temp[0];
 cout<<a<<" "<<b;
}
