#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    string n;
    cin >> n;
    int len = n.size();
    if (len < 4)
    {
        for (int i = 1; i <= 4 - len; i++)
        {
            cout << "0";
        }
        cout << n << endl;
    }
    else
        cout << n << endl;
    return 0;
}