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
        ll n, q;
        cin >> n >> q;

        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        ll brr[q];
        for (ll i = 0; i < q; i++)
            cin >> brr[i];

        set<ll> hs;

        for (ll i = 0; i < q; i++)
        {
            if (hs.count(brr[i]))
                continue;
            hs.insert(brr[i]);
            for (ll j = 0; j < n; j++)
            {
                if (arr[j] % (1 << brr[i]) == 0)
                    arr[j] += (1 << (brr[i] - 1));
            }
        }

        for (auto i : arr)
            cout << i << " ";
        cout << '\n';
    }
    return 0;
}
