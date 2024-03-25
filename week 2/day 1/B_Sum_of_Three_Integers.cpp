#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    ll k, s;
    cin >> k >> s;
    ll cnt = 0;
    for (ll i = 0; i <= k; i++)
    {
        for (ll j = 0; j <= k; j++)
        {
            ll l = s - i - j;
            if (l >= 0 && l <= k)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}