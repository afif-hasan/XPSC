#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        int mx = INT_MIN;
        int ar[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            mx = max(mx, ar[i] - i);
        }
        cout << mx << endl;
    }
    return 0;
}