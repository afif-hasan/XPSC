#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    ll ar[n], arr[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    ll j = 0;

    ll ans = 0;
    ll i = 0;
    while (i < n)
    {
        ll cnt1 = 0, cnt2 = 0;
        ll cur = ar[i];
        while (ar[i] == cur && i < n)
        {
            cnt1++;
            i++;
        }
        while (arr[j] < cur && j < m)
        {
            j++;
        }
        while (arr[j] == cur && j < m)
        {
            cnt2++;
            j++;
        }
        ans += (cnt1 * cnt2);
    }
    cout << ans << endl;
    return 0;
}