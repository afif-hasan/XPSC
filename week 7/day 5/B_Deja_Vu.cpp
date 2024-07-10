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
        vector<ll> vec(n);
        vector<ll> qry(q);
        for (auto &ite : vec)
            cin >> ite;
        for (auto &ite : qry)
            cin >> ite;
        for (ll i = 0; i < n; i++)
        {
            for (auto ite : qry)
            {
                if (vec[i] % (1 << ite) == 0)
                {
                    ll p = ite - 1;
                    vec[i] = vec[i] + (1 << p);
                }
            }
        }
        for (auto ite : vec)
            cout << ite << " ";
        cout << "\n";
    }
    return 0;
}