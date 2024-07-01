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
        int n, k;
        cin >> n >> k;
        vector<int> ne, po;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x > 0)
                po.push_back(x);
            if (x < 0)
                ne.push_back(-x);
        }
        ll ans = 0;

        sort(po.begin(), po.end());
        sort(ne.begin(), ne.end());
        reverse(po.begin(), po.end());
        reverse(ne.begin(), ne.end());

        if (ne.size() == 0)
        {
            if (po.size() != 0)
            {
                for (int i = 0; i < po.size(); i += k)
                {
                    // cout<<po[i]<<endl;
                    ans += po[i] * 2;
                }
                ans -= po[0];
            }
            cout << ans << endl;
        }
        else if (po.size() == 0)
        {
            if (ne.size() != 0)
            {
                for (int i = 0; i < ne.size(); i += k)
                {
                    ans += ne[i] * 2;
                }
                ans -= ne[0];
            }
            cout << ans << endl;
        }
        else
        {
            for (int i = 0; i < po.size(); i += k)
                ans += po[i] * 2;
            for (int i = 0; i < ne.size(); i += k)
                ans += ne[i] * 2;
            if (po[0] >= ne[0])
                ans -= po[0];
            else
                ans -= ne[0];
            cout << ans << endl;
        }
    }
    return 0;
}