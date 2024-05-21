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

        vector<ll> arr(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        bool flag = false;
        for (int i = 2; i <= n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                cout << "YES" << endl;
                cout << i - 1 << " " << i << " " << i + 1 << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "NO" << endl;
    }
    return 0;
}