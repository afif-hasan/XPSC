#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define modulo 1000000007
#define tst     \
    ll tst;     \
    cin >> tst; \
    while (tst--)
using namespace std;
int gcd(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    return max(a, b);
}
int main()
{
    fast;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ma = *max_element(a.begin(), a.end());
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int g = ma - a[0];
    for (int i = 1; i < n; i++)
    {
        g = gcd(g, ma - a[i]);
    }
    ll ans = (ma * 1ll * n - sum) / g;
    cout << ans << ' ' << g << endl;
    return 0;
}
