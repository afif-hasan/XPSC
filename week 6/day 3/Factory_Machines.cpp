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
    int n;
    ll t;
    cin >> n >> t;
    vector<ll> time(n);
    // time.reserve(n);
    // ll input = 0;
    // while (cin >> input)
    //     time.push_back(input);
    for (ll i = 0; i < n; i++)
        cin >> time[i];
    ll low = 0;
    ll high = (1e18);
    ll time_needed = 0;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        ll products_made = 0;
        for (ll i : time)
        {
            products_made += mid / i;
            if (products_made >= t)
                break;
        }
        if (products_made >= t)
        {
            time_needed = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << time_needed;
    return 0;
}