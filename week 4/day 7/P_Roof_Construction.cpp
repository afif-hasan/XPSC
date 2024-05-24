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
        int mx = n - 1;
        int k = __lg(mx);
        while (__lg(mx) == k)
        {
            cout << mx << " ";
            mx--;
        }
        mx = 0;
        while (__lg(mx) != k)
        {
            cout << mx << " ";
            mx++;
        }
        cout << endl;
    }
    return 0;
}
