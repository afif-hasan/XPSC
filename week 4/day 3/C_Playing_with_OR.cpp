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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll l = 0, r = 0, cnt = 0, ans = 0;
        while (r < n)
        {
            if (v[r] % 2 == 1) // odd hole cnt 1 plus hbe
            {
                cnt++;
            }
            if (r - l + 1 == k) // subarray er size k kina check
            {
                if (cnt != 0) // odd elemnt cnt zero na hole ans++
                {
                    ans++;
                }
                if (v[l] % 2 == 1) // left contribution shoray nibo tai jdi sheta odd hoy then
                // odd cnt -- hbe
                {
                    cnt--;
                }
                l++;
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}
