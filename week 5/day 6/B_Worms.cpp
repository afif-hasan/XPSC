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
    vector<int> v(n);
    vector<pair<int, int>> bound(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            bound[i].first = 1;
            bound[i].second = bound[i].first + v[i] - 1;
        }
        else
        {
            bound[i].first = bound[i - 1].second + 1;
            bound[i].second = bound[i].first + v[i] - 1;
        }
    }

    int m;
    cin >> m;
    while (m--)
    {
        int val;
        cin >> val;
        int l = 0, r = n - 1, ans = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (bound[mid].first <= val && bound[mid].second >= val)
            {
                ans = mid + 1;
                break;
            }
            else if (val > bound[mid].second)
            {
                l = mid + 1;
            }
            else if (val < bound[mid].first)
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}