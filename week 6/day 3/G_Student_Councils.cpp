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
bool possible(ll mid, ll k, ll g, vector<ll> &v)
{
    ll totalPeople = 0;
    ll councilPopulation = mid * k;
    for (ll i = 0; i < g; i++)
    {
        totalPeople += min(mid, v[i]);
    }
    if (totalPeople >= councilPopulation)
        return true;
    else
        return false;
}
int main()
{
    fast;
    ll k;
    cin >> k;
    ll g;
    cin >> g;
    vector<ll> v(g);
    ll sum = 0;
    for (ll i = 0; i < g; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end(), greater<>());
    ll l = 0, r = sum / k, ans = -1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (possible(mid, k, g, v))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}