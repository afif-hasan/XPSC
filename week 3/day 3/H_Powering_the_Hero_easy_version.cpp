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
        priority_queue<ll> pq;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            if (val != 0)
                pq.push(val);
            else
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}