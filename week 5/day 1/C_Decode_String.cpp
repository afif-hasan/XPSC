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
        string s;
        cin >> s;

        string ans = "";

        for (int i = 0; i < n; i++)
        {
            if (i + 2 < n and s[i + 2] == '0' and (i + 3 >= n or s[i + 3] != '0'))
            {
                int num = ((s[i] - '0') * 10) + (s[i + 1] - '0');
                ans.push_back((char)(96 + num));
                i += 2;
            }
            else
            {
                int num = ((s[i] - '0'));
                ans.push_back((char)(96 + num));
            }
        }

        cout << ans << endl;
    }
    return 0;
}