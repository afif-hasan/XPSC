//etake xor er associative law diyeo kora jay,,nicherta bruteforce solution
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
        {
            cin >> v[i];
        }
        int sum = 0;
        int x;
        for (x = 0; x < (1 << 8); x++)
        {
            for (int i = 0; i < n; i++)
            {
                sum ^= (v[i] ^ x);
            }
            if (sum == 0)
            {
                cout << x << endl;
                break;
            }
            else
                sum = 0; // sum 0 na hole sum 0 kore dicchi
        }
        if (x == (1 << 8)) // ans na pele -1 print hbe as x er value 1<<8 hwe jbe
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
