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

bool possible(ll mid, ll b, ll n, vector<tuple<int, int, int>> person, vector<ll> &result)
{
    ll total_ballons = 0;
    ll baki = b;
    vector<ll> can(n);
    for (int i = 0; i < n; i++)
    {
        ll perballonTime = get<0>(person[i]);
        ll restperballon = get<2>(person[i]);
        ll ability = get<1>(person[i]);
        ll totalTimeInOneAttempt = (perballonTime * ability) + restperballon;
        ll fullCycle = (mid / totalTimeInOneAttempt);
        ll timeremain = mid % totalTimeInOneAttempt;
        ll total_ballons = fullCycle * ability + min(ability, timeremain / perballonTime);
        total_ballons = min(baki, total_ballons);
        can[i] = total_ballons;
        baki -= total_ballons;
    }
    if (baki == 0) // balloons sesh
    {
        for (ll i = 0; i < n; i++)
        {
            result[i] = can[i];
        }
    }
    if (baki == 0) // balloons sesh
        return true;
    else
        return false;
}
int main()
{
    fast;
    ll no_of_ballons, no_of_assistnt;

    cin >> no_of_ballons >> no_of_assistnt;
    vector<tuple<int, int, int>> person(no_of_assistnt);
    for (ll i = 0; i < no_of_assistnt; i++)
    {
        ll ti, ability, rest;
        cin >> ti >> ability >> rest;
        person[i] = make_tuple(ti, ability, rest);
    }
    ll l = 0, r = 1e8, ans = -1;
    vector<ll> result(no_of_assistnt);
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (possible(mid, no_of_ballons, no_of_assistnt, person, result))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    for (ll val : result)
    {
        cout << val << " ";
    }
    return 0;
}
