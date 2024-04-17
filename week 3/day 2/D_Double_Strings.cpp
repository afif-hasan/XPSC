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
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vector<string> v(n);
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = true;
        }
        for (string s : v)
        {
            string x;
            bool flag = false;
            for (int i = 0; i < s.size() - 1; i++)
            {
                x += s[i];
                string y;
                for (int j = i + 1; j < s.size(); j++)
                {
                    y += s[j];
                }
                if (mp[x] == true && mp[y] == true)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}