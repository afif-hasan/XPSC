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
        ll n;
        cin >> n;

        ll pos = 0, neg = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll x;
            cin >> x;
            if (x >= 0)
                pos += x;
            else
            {
                if (pos + x >= 0)
                    pos += x;
                else
                {
                    x += pos;
                    pos = 0;
                    neg += x;
                }
            }
        }

        cout << -neg << endl;
    }
    return 0;
}