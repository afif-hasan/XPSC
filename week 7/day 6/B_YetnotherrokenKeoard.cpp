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
        map<ll, char> ma;
        ll n, ind;
        string s;
        cin >> s;
        n = (ll)s.size();
        stack<ll> upper, lower;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (!upper.empty())
                {
                    ind = upper.top();
                    ma[ind] = '$';
                    upper.pop();
                }
                continue;
            }
            if (s[i] == 'b')
            {
                if (!lower.empty())
                {
                    ind = lower.top();
                    ma[ind] = '$';
                    lower.pop();
                }
                continue;
            }
            ma[i] = s[i];
            if (isupper(s[i]))
            {
                upper.push(i);
            }
            else
            {
                lower.push(i);
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (ma.count(i) and ma[i] != '$')
            {
                cout << ma[i];
            }
        }
        cout << endl;
    }
    return 0;
}