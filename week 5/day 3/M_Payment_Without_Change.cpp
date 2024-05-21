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
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        ll r = s % n;
        if (r <= b and a * n + b >= s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}