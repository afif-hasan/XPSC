#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
int main()
{
    fast;
    ll tst;
    cin >> tst;
    while (tst--)
    {
        ll n;
        cin >> n;
        set<ll> s;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
            s.insert(val);
            s.insert(val + 1);
        }
        ll prev = 0;
        ll sets = 0;
        for (auto val : s)
        {
            ll crnt = mp[val];
            if (crnt - prev > 0)
            {
                sets += crnt - prev;
            }
            prev = crnt;
        }
        cout << sets << endl;
    }
    return 0;
}