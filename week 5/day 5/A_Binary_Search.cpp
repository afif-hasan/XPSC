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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (k--)
    {
        int val;
        cin >> val;
        int l = 0, r = n - 1, res = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == val)
            {
                res = mid;
                break;
            }
            else if (v[mid] < val)
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (res == -1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}