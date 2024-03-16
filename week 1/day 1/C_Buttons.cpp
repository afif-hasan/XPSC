#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    if (mx == a)
    {
        a--;
        if (a > b)
        {
            cout << mx + a << endl;
        }
        else
            cout << mx + b << endl;
    }
    else
    {
        b--;
        if (b > a)
            cout << mx + b << endl;
        else
            cout << mx + a << endl;
    }

    return 0;
}