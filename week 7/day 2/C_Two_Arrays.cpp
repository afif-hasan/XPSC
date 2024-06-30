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
        int ar[n + 3], br[n + 3];
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        for (int i = 0; i < n; i++)
            cin >> br[i];
        sort(ar, ar + n);
        sort(br, br + n);
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (ar[i] > br[i] || br[i] - ar[i] > 1)
            {
                ans = 1;
                break;
            }
        }
        if (ans == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}