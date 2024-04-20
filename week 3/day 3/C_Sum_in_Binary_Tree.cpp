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
        ll n;
        cin >> n;
        ll ans = 0;
        while (n >= 1)
        {
            ans += n;
            n = n / 2;
        }
        cout << ans << endl;
    }

    return 0;
}