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
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll mindif = LLONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            if (b[i] != 0)
                mindif = min(mindif, a[i] - b[i]);
        }
        if (mindif < 0)
            cout << "NO" << endl;
        else
        {
            vector<ll> res;
            for (ll i = 0; i < n; i++)
            {
                res.push_back(max((a[i] - mindif), 0LL));
            }
            if (res == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
