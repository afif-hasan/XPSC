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
        int a, b, l;
        cin >> a >> b >> l;
        set<int> ans;
        for (int i = 0; i <= 34; ++i)
        {
            int x = l;
            bool fail = false;
            for (int _ = 0; _ < i; ++_)
            {
                if (x % a)
                {
                    fail = true;
                    break;
                }
                x /= a;
            }
            if (fail)
                break;
            while (true)
            {
                ans.insert(x);
                if (x % b)
                    break;
                x /= b;
            }
        }
        cout << ans.size() << endl;
        }
    return 0;
}