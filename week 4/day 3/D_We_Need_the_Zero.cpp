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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int x = 0;
        for (int i = 0; i < n; i++)
        {
            x ^= a[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[i] ^= x;
        }
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            y ^= a[i];
        }
        if (y == 0)
        {
            cout << x << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}