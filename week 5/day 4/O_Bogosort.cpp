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
        vector<int> arr(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), greater<int>());

        for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
