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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--)
    {
        int lkey, rkey;
        cin >> lkey >> rkey;
        int l = 0, r = n - 1, lindx = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (lkey <= v[mid])
            {
                lindx = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        l = 0, r = n - 1;
        int rindx = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (rkey >= v[mid])
            {
                rindx = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (lindx == -1)
            cout << 0 << " ";
        else
        {
            int res = rindx - lindx + 1;
            cout << res << " ";
        }
    }
    return 0;
}