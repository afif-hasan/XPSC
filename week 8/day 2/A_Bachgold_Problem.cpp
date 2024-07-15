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
    ll n;
    cin >> n;
    ll ans = 0;
    if (n % 2 == 0)
    {
        ans = n / 2;
        cout << ans << endl;
        ll i = 0;
        while (i < ans)
        {
            cout << 2 << " ";
            i++;
        }
        cout << endl;
    }
    else
    {
        n -= 3;
        ans = n / 2;
        cout << ans + 1 << endl;
        ll i = 0;
        while (i < ans)
        {
            cout << 2 << " ";
            i++;
        }
        cout << 3 << endl;
    }
    return 0;
}