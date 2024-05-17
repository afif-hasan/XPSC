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
        int n;
        cin >> n;
        int one = 0, cnt = 0;
        for (int i = 31; i >= 0; i--)
        {
            if (((1 << i) & n) != 0)
            {
                one++;
            }
            if (one >= 2)
            {
                if (((1 << i) & n) == 0)
                {
                    cnt++;
                }
            }
        }
        cout << (1 << cnt) << endl;
    }
    return 0;
}
