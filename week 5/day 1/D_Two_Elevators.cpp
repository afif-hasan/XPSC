#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define loop for (ll i = 0; i < n; i++)
#define tst     \
    ll tst;     \
    cin >> tst; \
    while (tst--)
using namespace std;
int main()
{
    fast;
    tst
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ans1 = abs(a - 1);
        int ans2 = abs(b - c) + (c - 1);

        if (ans1 == ans2)
        {
            cout << 3 << endl;
        }
        else if (ans1 < ans2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}