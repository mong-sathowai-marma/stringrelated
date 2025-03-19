#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int N;
    cin >> N;
    string s;
    cin >> s;
    char flag;
    int temp = 0;
    int i = 0;
    while (i < N) 
    {
        if (i == 0) 
        {
            flag = s[i];
            temp++;
        } else 
        {
            if (s[i] != flag) 
            {
                temp++;
                flag = s[i];
            }
        }
        i++;
    }
    cout << temp;
    return 0;
}
