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
        ll n, k;
        cin >> n >> k;
        ll p = 1;
        ll ans = 0;
        ll INF = 1e9 + 7;
        for (int j = 0; j < 31; j++)
        {
            if (k & (1 << j))
            {
                ans = (ans + p) % INF;
            }
            p *= n;
            p %= INF;
        }
        cout << ans << "\n";
    }
    return 0;
}