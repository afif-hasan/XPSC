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
        int a, b;
        cin >> a >> b;
        int mx = max(a, b);
        int mn = min(a, b);
        cout << (mn ^ mx) << endl;
    }
    return 0;
}
