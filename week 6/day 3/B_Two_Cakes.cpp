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
bool possible(int mid, int n, int a, int b)
{
    int plates = (a / mid) + (b / mid);
    if (plates < n)
        return false;
    else
        return true;
}
int main()
{
    fast;
    int n, a, b;
    cin >> n >> a >> b;
    int mnpiece = min(a, b);
    int l = 1, r = mnpiece, ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (possible(mid, n, a, b))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}
