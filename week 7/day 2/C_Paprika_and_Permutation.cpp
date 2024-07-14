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
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        map<ll, ll> mp;
        ll cnt = 0;
        vector<ll> change;
        for (ll i = 0; i < n; i++)
        {
            mp[v[i]]++;
            if (mp[v[i]] == 1 && (v[i] <= n))
            {
                cnt++;
            }
            else
            {
                change.push_back(v[i]);
            }
        }
        vector<ll> need;
        for (ll i = 1; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                need.push_back(i);
            }
        }
        ll sz = need.size();
        bool flag = true;
        for (ll i = 0; i < sz; i++)
        {
            if (change[i] % 2 == 0)
            {
                if (need[i] < (change[i] / 2) || need[i] == change[i])
                {
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if (need[i] <= (change[i] / 2) || need[i] == change[i])
                {
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << sz << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
