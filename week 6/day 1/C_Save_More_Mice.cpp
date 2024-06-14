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
        ll hole, n;
        cin >> hole >> n;
        vector<ll> mice(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> mice[i];
        }
        sort(mice.begin(), mice.end(), greater<>());

        ll cnt = 0, cat_pos = 0;
        for (ll i = 0; i < n; i++)
        {
            if (cat_pos < mice[i])
            {
                cnt++;
                cat_pos += hole - mice[i];
            }
            else
                break;
        }
        cout << cnt << endl;
    }
    return 0;
}