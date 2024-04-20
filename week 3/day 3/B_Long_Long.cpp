#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
int main()
{
    fast;
    ll tst;
    cin >> tst;
    while (tst--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll positive_sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 0)
            {
                positive_sum += v[i] * (-1);
            }
            else
                positive_sum += v[i];
        }
        ll i = 0, cnt = 0;
        while (i < n)
        {
            if (v[i] < 0)
            {
                cnt++;
                while (v[i] <= 0 && i < n)
                {
                    i++;
                }
            }
            i++;
        }
        cout << positive_sum << " " << cnt << endl;
    }
    return 0;
}