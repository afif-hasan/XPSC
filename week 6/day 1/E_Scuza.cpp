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
        ll n, q;
        cin >> n >> q;
        vector<ll> stps(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> stps[i];
        }
        while (q--)
        {
            ll leg;
            cin >> leg;
            auto it = upper_bound(stps.begin(), stps.end(), leg);
            // cout << it - stps.begin() << " ";
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}