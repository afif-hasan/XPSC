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
        unordered_map<char, int> look_up;
        unordered_map<ll, vector<int>> lp;
        ll n, m, k = 0, p = 0, q = 0, sum = 0, ans = 0, tmp = 0, count = 0;
        vector<ll> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        cin >> n;
        vector<int> rstl(n, 0), padd(50, -1);
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            for (int j = 0; j < v.size(); j++)
            {

                if (tmp % v[j] == 0)
                {
                    if (padd[v[j]] == -1)
                        count++, padd[v[j]] = count;
                    rstl[i] = padd[v[j]];
                    break;
                }
            };
            ;
        }
        cout << count << endl;
        for (int val : rstl)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}