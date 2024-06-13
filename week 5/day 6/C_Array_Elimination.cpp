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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        vector<int> bits(30);
        for (int i = 0; i < 30; i++)
            bits[i] = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (((v[i] >> j) & 1) == 1)
                {
                    bits[j]++;
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            bool flag = true;
            for (int val : bits)
            {
                if (val % i != 0)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}