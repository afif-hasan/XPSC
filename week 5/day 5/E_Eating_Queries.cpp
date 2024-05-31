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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<>());
        vector<ll> pre(n + 1);
        pre[0] = 0;
        for (ll i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + v[i - 1];
        }
        while (q--)
        {
            ll target;
            cin >> target;
            ll l = 0, r = n, indx = -1;
            while (l <= r)
            {
                ll mid = (l + r) / 2;
                if (target <= pre[mid])
                {
                    indx = mid;
                    r = mid - 1;
                }
                else
                    l = mid + 1;
            }
            cout << indx << endl;
        }
    }
    return 0;
}