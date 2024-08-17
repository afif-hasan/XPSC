#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define modulo 1000000007
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
        ll q;
        cin >> q;
        vector<ll> v1, v2;
        bool logicChange = false;
        while (q--)
        {
            ll val;
            cin >> val;
            if (v1.empty())
            {
                v1.push_back(val);
                v2.push_back(1);
            }
            else
            {
                if (!logicChange)
                {
                    if (val >= v1.back())
                    {
                        v1.push_back(val);
                        v2.push_back(1);
                    }
                    else
                    {
                        if (val <= v1[0])
                        {
                            v1.push_back(val);
                            v2.push_back(1);
                            logicChange = true;
                        }
                        else
                        {
                            v2.push_back(0);
                        }
                    }
                }
                else
                {
                    if (val < v1.back())
                    {
                        v2.push_back(0);
                    }
                    else
                    {
                        if (val <= v1[0])
                        {
                            v1.push_back(val);
                            v2.push_back(1);
                        }
                        else
                        {
                            v2.push_back(0);
                        }
                    }
                }
            }
        }
        for (ll val : v2)
        {
            cout << val;
        }
        cout << endl;
    }
    return 0;
}
