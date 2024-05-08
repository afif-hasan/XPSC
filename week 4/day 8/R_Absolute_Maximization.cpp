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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;
        for (int bit = 0; bit <= 12; bit++)
        {
            bool one = false, zero = false;
            for (int i = 0; i < n; i++)
            {
                bitset<13> b(a[i]);
                one |= (b[bit] == 1);
                zero |= (b[bit] == 0);
            }
            if (one and zero)
            {
                ans += (1ll << (ll)bit);
            }
        }
        cout << ans << endl;
    }
    return 0;
}