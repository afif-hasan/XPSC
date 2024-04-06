#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
int main()
{
    fast;
    int k;
    string s;
    cin >> k >> s;
    int n = s.size();
    map<char, int> mp;
    int l = 0, r = 0, ans = INT_MIN;
    while (r < n)
    {
        mp[s[r]]++;
        if (mp.size() == k)
        {
            ans = max(ans, r - l + 1);
        }
        while (mp.size() > k)
        {
            mp[s[l]]--;
            if (mp[s[l]] == 0)
                mp.erase(s[l]);
            l++;
        }
        r++;
    }
    if (ans == INT_MIN)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}