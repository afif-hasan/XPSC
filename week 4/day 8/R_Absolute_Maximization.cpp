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
        int mxOR = 0, mnAD = -1;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mxOR |= val;
            mnAD &= val;
        }
        cout << mxOR - mnAD << endl;
    }
    return 0;
}
