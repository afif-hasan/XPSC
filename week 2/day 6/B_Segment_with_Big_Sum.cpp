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
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    ll mn = INT_MAX;
    ll l = 0, r = 0, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (r < n)
    {
        sum += v[r];
        while (sum >= s && l <= r)
        {
            mn = min(mn, r - l + 1);
            sum -= v[l];
            l++;
        }
        r++;
    }
    if (mn == INT_MAX)
        cout << -1 << endl;
    else
        cout << mn << endl;

    return 0;
}