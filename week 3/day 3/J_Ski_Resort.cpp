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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n, k, t;
        cin >> n >> k >> t;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int l = 0, r = 0, ans = 0;
        while (r < n)
        {
            if (v[r] <= t)
            {
                if (r - l + 1 >= k)
                {
                    ans += r - l + 1;
                }
            }
            else
            {
                l = r + 1;
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}