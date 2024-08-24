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
int main()
{
    fast;
    tst
    {
        int n;
        cin >> n;
        int ar[n + 3];
        int ans = 0;
        for (int i = 1; i <= n; i++)
            cin >> ar[i];
        for (int i = 1; i <= n; i++)
        {
            int ind = 0;
            for (int j = 2; j <= i + 1; j++)
            {
                if (ar[i] % j != 0)
                {
                    ind = 1;
                    break;
                }
            }
            if (ind == 0)
            {
                ans = 1;
                break;
            }
        }
        if (ans == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}