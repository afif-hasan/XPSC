#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define modulo 1000000007
#define tst     \
    ll tst;     \
    cin >> tst; \
    while (tst--)
using namespace std;
int main()
{
    fast;
    ll n, target;
    cin >> n >> target;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> pre(n + 1);
    pre[0] = 0;
    for (ll i = 1; i < n + 1; i++)
    {
        pre[i] = pre[i - 1] + v[i - 1];
    }
    map<ll, ll> mp;
    ll cnt = 0;
    for (ll i = 0; i < n + 1; i++)
    {
        cnt += mp[pre[i] - target];
        mp[pre[i]]++;
    }
    cout << cnt << endl;
    return 0;
}