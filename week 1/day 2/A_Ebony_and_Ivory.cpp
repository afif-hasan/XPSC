#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int y = 0; y <= c / b; y++)
    {
        if ((c - (b * y)) % a == 0)
            flag = true;
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}