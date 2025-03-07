#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[1000000];
    cin.getline(s, 1000000);
    for (int i = 0; s[i] != '\\'; i++)
    {
        cout << s[i];
    }

    return 0;
}

