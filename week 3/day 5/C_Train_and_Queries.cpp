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
        map<ll, pair<ll, ll>> mp;
        loop
        {
            ll val;
            cin >> val;
            if (!mp.count(val)) // map e nai mane first occurence
            {
                mp[val].first = i; // first occurence er index rekhe dicchi
                mp[val].second = i;
            }
            else
                mp[val].second = i; // further occurencer index rekhe dicchi
        }
        while (q--)
        {
            ll a, b; // a is starting and b is destination
            cin >> a >> b;
            if (!mp.count(a) || !mp.count(b)) // checking if either a or b is not a valid terminal
            {
                cout << "NO" << endl;
            }
            else
            {
                if (mp[a].first <= mp[b].second)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}