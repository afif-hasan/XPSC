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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> army(m + 1);
    for (int i = 0; i < m + 1; i++)
    {
        cin >> army[i];
    }
    int frnd = 0;
    for (int j = 0; j < m; j++)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (((army[j] >> i) & 1) != ((army[m] >> i) & 1))
            {
                cnt++;
            }
        }
        if (cnt <= k)
            frnd++;
    }
    cout << frnd << endl;
    return 0;
}
