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
        int b;
        cin >> b;
        int cur = -1;
        int i = 0;
        while (i < n)
        {
            int ax;
            cin >> ax;
            if ((ax & b) == b)
                cur &= ax;
            i++;
        }
        if (cur == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}