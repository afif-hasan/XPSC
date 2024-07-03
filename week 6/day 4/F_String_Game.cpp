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
bool possible(int mid, int n, vector<int> v, string trget, string del)
{
    for (int i = 0; i < mid; i++)
    {
        del[v[i] - 1] = '1';
    }
    string s = "";
    for (char c : del)
    {
        if (c != '1')
        {
            s.push_back(c);
        }
    }
    int m = trget.size();
    int k = s.size();
    int j = 0;
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        while (j < k)
        {
            if (trget[i] == s[j])
            {
                j++;
                cnt++;
                break;
            }
            else
            {
                j++;
            }
        }
    }
    if (cnt == m)
        return true;
    else
        return false;
}
int main()
{
    fast;
    string del;
    cin >> del;
    string trget;
    cin >> trget;
    int n = del.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int l = 0, r = n, ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (possible(mid, n, v, trget, del))
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
