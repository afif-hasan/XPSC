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
        ll n;
        cin >> n;
        ll upLimit = 1e4;
        bool found = false;
        for (ll i = 1; i <= upLimit; i++)
        {
            double a = pow(i, 3);
            ll l = 1, r = upLimit;

            while (l <= r)
            {
                ll mid = (l + r) / 2;
                double b = pow(mid, 3);
                if (a + b == n)
                {
                    found = true;
                    break;
                }
                else if (a + b > n)
                {
                    r = mid - 1;
                }
                else if (a + b < n)
                {
                    l = mid + 1;
                }
            }
            if (found)
                break;
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}