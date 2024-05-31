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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (q--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1, indx = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (key <= v[mid])
            {
                indx = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        if (indx == -1)
            cout << n + 1 << endl;
        else
            cout << indx + 1 << endl;
    }
    return 0;
}