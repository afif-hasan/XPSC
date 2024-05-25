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
        int m = n * (n - 1) / 2;
        vector<int> b(m);
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(b.begin(), b.end());
        for (int i = 0; i < m; i += --n)
            cout << b[i] << ' ';
        cout << "1000000000\n";
    }
    return 0;
}