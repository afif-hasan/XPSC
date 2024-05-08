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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool flag = 0;
    int m = (1 << n);
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int bits = 0; bits < n; bits++)
        {
            if (i & (1 << bits))
                sum += arr[bits];
            else
                sum -= arr[bits];
        }

        if (sum % 360 == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}