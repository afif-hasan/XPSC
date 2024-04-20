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
        ll cars, charger, hour;
        cin >> cars >> charger >> hour;
        vector<ll> c(cars), ch(charger);
        for (ll i = 0; i < cars; i++)
        {
            cin >> c[i];
        }
        for (ll i = 0; i < charger; i++)
        {
            cin >> ch[i];
        }
        sort(c.begin(), c.end(), greater<>());
        sort(ch.begin(), ch.end(), greater<>());
        ll ans = 0;
        ll i = 0;
        ll n = min(cars, charger);
        while (i < n)
        {
            if ((ch[i] * hour) <= c[i])
            {
                ans += (ch[i] * hour);
            }
            else
                ans += c[i];
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}