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
        string s;
        cin >> s;
        ll num = 0;
        ll n = s.length();
        ll cnt;

        if (n % 2 == 0 and n > 2)
        {
            ll i = 1;
            while (i < n / 2)
            {
                if (s[i] != s[i - 1])
                {
                    num++;
                    break;
                }
                i++;
            }
        }
        else if (n % 2 == 1 and n > 3)
        {
            ll j = 1;
            while (j < n / 2)
            {
                if (s[j] != s[j - 1])
                {
                    num++;
                    break;
                }
                j++;
            }
        }
        if (num)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}