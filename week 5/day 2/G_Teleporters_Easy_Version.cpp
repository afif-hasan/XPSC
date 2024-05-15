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
        ll c;
        cin >> c;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += (i + 1);
        }

        sort(a.begin(), a.end());
        int ans = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + a[i] > c)
                break;
            sum += a[i];
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}