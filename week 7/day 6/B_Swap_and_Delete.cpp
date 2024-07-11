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
        ll ans = 0;
        string s;
        cin >> s;
        ll n = (ll)s.size();
        ll a[2] = {0, 0};
        for (ll i = 0; i < n; i++)
        {
            a[s[i] - '0']++;
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[!(s[i] - '0')] > 0)
            {
                a[!(s[i] - '0')]--;
            }
            else
            {
                ans = n - i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}