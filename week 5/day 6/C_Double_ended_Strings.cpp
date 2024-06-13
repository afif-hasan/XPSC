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
        string a, b;
        cin >> a >> b;
        int mx_cnt = INT_MIN;
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < b.size(); j++)
            {
                if (a[i] == b[j])
                {
                    int k = i, p = j;
                    int cnt = 0;
                    while (k < a.size() && p < b.size() && a[k] == b[p])
                    {
                        cnt++;
                        k++;
                        p++;
                    }
                    mx_cnt = max(mx_cnt, cnt);
                }
            }
        }
        int res = (a.size() - mx_cnt) + (b.size() - mx_cnt);
        cout << res << endl;
    }
    return 0;
}