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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<>());
        priority_queue<ll> pq;
        for (ll i = 0; i < n; i++)
        {
            if (pq.empty())
            {
                pq.push(v[i]);
            }
            else
            {
                ll x = pq.top();
                if (v[i] <= pq.top())
                {
                    pq.pop();
                    pq.push(v[i] ^ x);
                }
                else
                {
                    pq.push(v[i]);
                }
            }
        }
        cout << pq.size() << endl;
    }
    return 0;
}
