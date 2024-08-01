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
        ll n, k;
        cin >> n >> k;
        vector<ll> pos, neg;
        ll mxval = INT_MIN;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mxval = max(abs(x), mxval);
            if (x < 0)
                neg.push_back(x);
            else
                pos.push_back(x);
        }
        ll szneg = neg.size();
        ll szpos = pos.size();
        for (ll i = 0; i < szneg; i++)
        {
            neg[i] = abs(neg[i]);
        }
        sort(pos.begin(), pos.end(), greater<>());
        sort(neg.begin(), neg.end(), greater<>());
        ll ans = 0;
        for (ll i = 0; i < szneg; i += k)
        {
            ans += neg[i] * 2;
        }
        for (ll i = 0; i < szpos; i += k)
        {
            ans += pos[i] * 2;
        }
        cout << ans - mxval << endl;
    }
    return 0;
}
