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
        n--;
        int x = log2(n);
        x = pow(2, x);
        int ans = 0;
        int y = n - x;
        for (int i = x; i <= n; i++)
            cout << i << " ";
        cout << y << " ";
        for (int i = 0; i < x; i++)
        {
            if (i == y)
                continue;
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}