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
        ll n, k, prfLang;
        cin >> n >> k >> prfLang;
        vector<ll> goodSong;
        loop
        {
            ll len, lang;
            cin >> len >> lang;
            if (lang == prfLang)
            {
                goodSong.push_back(len);
            }
        }
        if (goodSong.empty() || k > goodSong.size())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(goodSong.begin(), goodSong.end(), greater<>());
            ll total_time = 0;
            for (ll i = 0; i < k; i++)
            {
                total_time += goodSong[i];
            }
            cout << total_time << endl;
        }
    }
    return 0;
}