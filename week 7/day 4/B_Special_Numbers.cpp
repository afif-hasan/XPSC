#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define loop for (ll i = 0; i < n; i++)
#define modulo 1000000007
#define tst     \
    ll tst;     \
    cin >> tst; \
    while (tst--)
using namespace std;
ll res(ll n, ll i)
{
    ll ans = 1;
    for (ll j = 1; j <= i; j++)
    {
        ans = (ans * n) % modulo;
    }
    return ans;
}
int main()
{
    fast;
    tst
    {
        ll n, k;
        cin >> n >> k;
        ll total = 0;
        for (ll i = 0; i <= 32; i++)
        {
            if ((k >> i) & 1)
            {
                total += res(n, i);
            }
        }
        cout << total % modulo << endl;
    }
    return 0;
}
