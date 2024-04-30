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

        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        ll odd = 0;
        for (ll i = 0; i < k; i++)
        {
            if (arr[i] % 2 != 0)
                odd++;
        }

        ll ans = 0;
        if (odd > 0)
            ans++;

        for (ll i = k; i < n; i++)
        {
            if (arr[i - k] % 2 != 0)
                odd--;
            if (arr[i] % 2 != 0)
                odd++;
            if (odd > 0)
                ans++;
        }

        cout << ans << '\n';
    }
    return 0;
}