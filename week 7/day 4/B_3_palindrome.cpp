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
    int n;
    cin >> n;
    cout << 'a';
    int cnta = 1, cntb = 0;
    for (int i = 1; i < n; i++)
    {
        if (cnta < 2)
        {
            cout << 'a';
            cnta++;
        }
        else
        {
            cout << 'b';
            cntb++;
            if (cntb == 2)
            {
                cnta = 0;
                cntb = 0;
            }
        }
    }

    return 0;
}
