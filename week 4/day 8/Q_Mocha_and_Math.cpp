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
        vector<int> v(n);
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            ans = ans & val;
        }
        cout << ans << endl;
    }
    return 0;
}
