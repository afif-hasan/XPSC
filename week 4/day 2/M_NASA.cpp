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
vector<ll> palind;
void make_palindromes()
{
    for (ll i = 0; i < (1 << 15); i++)
    {
        string s = to_string(i);
        string cpy = s;
        reverse(cpy.begin(), cpy.end());
        if (s == cpy)
            palind.push_back(i);
    }
}
int main()
{

    fast;
    make_palindromes();
    tst
    {
        ll n;
        cin >> n;
        unordered_map<ll, ll> cnt; // faster than map
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {

            cin >> v[i];
            cnt[v[i]]++;
        }
        ll pair = n; // every elment xoring with itself will provide zero which is palindrome
        ll len = palind.size();
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < len; j++)
            {
                ll res = v[i] ^ palind[j];
                pair += cnt[res]; // cnt every pairs,
                // twice for distinct elements and once for itself
            }
        }
        cout << pair / 2 << endl; // that why dividing by 2 will cancel the repeating
    }
    return 0;
}
