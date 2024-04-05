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
    {
        cin >> v[i];
    }
    ll l = 0, r = 0, cnt = 0, ans = 0;
    map<ll, ll> mp;
    while (r < n)
    {
        mp[v[r]]++;
        while (mp.size() > s) // map unique value koyta sheta ber kore dey
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
                mp.erase(v[l]);
            l++;
        }
        ans += r - l + 1;
        r++;
    }
    cout << ans << endl;
    return 0;
}