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
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    ll l = 0, r = 0, sum = 0, ans = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > s && l < r)
            {
                sum -= v[l];
                l++;
            }
            if (sum <= s)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}