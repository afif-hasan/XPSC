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
        vector<ll> stps(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> stps[i];
        }
        vector<ll> preSum(n + 1);
        preSum[0] = 0;
        for (ll i = 1; i <= n; i++)
        {
            preSum[i] = preSum[i - 1] + stps[i - 1];
        }
        vector<ll> mx(n);
        for (ll i = 0; i < n; i++)
        {
            if (i == 0)
                mx[i] = stps[i];
            else
                mx[i] = max(mx[i - 1], stps[i]);
        }
        while (q--)
        {
            ll leg;
            cin >> leg;
            auto it = upper_bound(mx.begin(), mx.end(), leg) - 1;
            cout << preSum[it - mx.begin() + 1] << " ";
        }
        cout << endl;
    }
    return 0;
}
