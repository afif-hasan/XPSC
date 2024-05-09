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
        vector<ll> v(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[__lg(v[i])]++; // last bit er 2 er power koto sheta bole dey
            // or postition of the last bit tao bole dey.O(1) complexity
        }
        ll ans = 0;
        for (auto [x, y] : mp) // evbe map er value gula access kora jay
        {
            ans += (y * (y - 1)) / 2;// pairs can be made from n elements
        }
        cout << ans << endl;
    }
    return 0;
}
