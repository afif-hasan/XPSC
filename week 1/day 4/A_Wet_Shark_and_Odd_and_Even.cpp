#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    ll mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] % 2 == 1)
        {
            mn = min(mn, v[i]);
        }
    }
    if (sum % 2 == 0)
        cout << sum << endl;
    else
    {
        cout << sum - mn << endl;
    }
    return 0;
}