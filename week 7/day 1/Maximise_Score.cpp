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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int diff[n];
        diff[0] = abs(a[1] - a[0]);
        diff[n - 1] = abs(a[n - 1] - a[n - 2]);

        for (int i = 1; i <= n - 2; i++)
        {
            int d1 = abs(a[i + 1] - a[i]);
            int d2 = abs(a[i] - a[i - 1]);
            diff[i] = max(d1, d2);
        }
        int *ans = min_element(diff, diff + n);
        cout << *ans << endl;
    }
    return 0;
}