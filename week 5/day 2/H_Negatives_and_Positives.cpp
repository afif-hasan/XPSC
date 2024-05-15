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
        int n;
        cin >> n;
        vector<ll> a(n);
        ll neg = 0, ans = 0, mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                neg++;
            }
            ans += abs(a[i]);
            mn = min(mn, abs(a[i]));
        }

        if (neg % 2 == 1)
            ans -= (2LL * mn);

        cout << ans << endl;
    }
    return 0;
}