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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int seq = (1 << n); // no of subsequences
    bool flag = false;
    for (int i = 0; i < seq; i++) // number of sequences 2^n
    {
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            if ((i >> k) & 1) // bit 1 hole clockwise
            {
                sum += v[k];
            }
            else
                sum -= v[k]; // bit 0 hole anticlockwise
        }
        if (sum % 360 == 0)
            flag = true;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
