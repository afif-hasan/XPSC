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
        int a = 1;
        int b = 0;
        int count = 0;
        while (a * 2 <= n)
        {
            a = a * 2;
            count++;
        }
        for (int i = count - 1; i >= 0; i--)
        {
            if ((n & 1 << i))
            {
                b = b | (1 << i);
            }
        }
        cout << b << " " << a << endl;
    }
    return 0;
}