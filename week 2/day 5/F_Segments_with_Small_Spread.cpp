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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    multiset<ll> ml;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = 0, r = 0, ans = 0;
    while (r < n)
    {
        ml.insert(v[r]);
        ll mx = *ml.rbegin();
        ll mn = *ml.begin();
        if ((mx - mn) <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (((mx - mn) > k) && l < r)
            {
                auto it = ml.find(v[l]);
                ml.erase(it);
                l++;
                mx = *ml.rbegin();
                mn = *ml.begin();
            }
            ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}