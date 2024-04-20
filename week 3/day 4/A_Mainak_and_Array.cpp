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
        int n;
        cin >> n;
        vector<int> v(n);
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if (n == 1)
            cout << 0 << endl;
        else
        {
            for (int i = 1; i < n; i++) // keeping the first value constant
            {
                ans = max(ans, v[i] - v[0]);
            }
            for (int i = 0; i < n - 1; i++) // keeping the last index constant
            {
                ans = max(ans, v[n - 1] - v[i]);
            }
            for (int i = 0; i < n - 1; i++)
            {
                ans = max(ans, v[i] - v[i + 1]);
            }
            cout << ans << endl;
        }
    }
    return 0;
}