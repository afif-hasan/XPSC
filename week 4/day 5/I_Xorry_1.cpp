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
        int x;
        cin >> x;
        int msb = __lg(x);
        int b = (1 << msb);
        int a = x ^ b;
        cout << a << " " << b << endl;
    }
    return 0;
}
