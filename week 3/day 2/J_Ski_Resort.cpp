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
    ll tst;
    cin >> tst;
    while (tst--)
    {
        ll n, k, limit;
        cin >> n >> k >> limit;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0, consGoodSegmentSize = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] <= limit)
            {
                consGoodSegmentSize++;
            }
            if (i == n - 1 || v[i + 1] > limit) // at the last index or the next value is greater then limit
            {
                if (consGoodSegmentSize >= k) // least segment size
                {
                    ll x = consGoodSegmentSize - k + 1; // x is the no of good segments with size k
                    ans += (x * (x + 1)) / 2;            // sum of natural numbers upto x
                }
                consGoodSegmentSize = 0;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
