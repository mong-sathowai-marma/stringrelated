#include <iostream>
using namespace std;
int main() 
{
    int N;
    cin >> N;
    while (N--) 
    {
        string S, T;
        cin >> S >> T;
        int i = 0;
        while (i < S.size() && i < T.size()) 
        {
            cout << S[i] << T[i];
            i++;
        }
        while (i < S.size()) 
        {
            cout << S[i];
            i++;
        }
        while (i < T.size()) 
        {
            cout << T[i];
            i++;
        }
        cout << endl;
    }
    return 0;
}
