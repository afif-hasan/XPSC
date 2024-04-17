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
        string s;
        cin >> s;
        ll init_sum = 0;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                init_sum += i;
                v.push_back((n - (i + 1)) - i);
            }
            else
            {
                init_sum += n - (i + 1);
                v.push_back(i - (n - (i + 1)));
            }
        }
        sort(v.begin(), v.end(), greater<ll>());
        for (ll val : v)
        {
            if (init_sum + val > init_sum)
            {
                init_sum += val;
            }
            cout << init_sum << " ";
        }
        cout << endl;
    }

    return 0;
}