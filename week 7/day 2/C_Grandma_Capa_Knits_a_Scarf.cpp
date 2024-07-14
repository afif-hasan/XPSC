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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll i = 0, j = n - 1;
        ll cnt = 0;
        bool flag = true;
        while (i <= j)
        {
            char omil;
            if (s[i] != s[j])
            {
                if (cnt == 0)
                {
                    omil = s[i];
                    cnt++;
                    i++;
                }
                else
                {
                    if (s[i] == omil)
                    {
                        cnt++;
                        i++;
                    }
                    else if (s[j] == omil)
                    {
                        cnt++;
                        j--;
                    }
                    else
                    {
                        flag = false;
                        break;
                    }
                }
            }
            else
            {
                i++;
                j--;
            }
        }
        i = 0, j = n - 1;
        ll cnt2 = 0;
        bool flag2 = true;
        while (i <= j)
        {
            char omil2;
            if (s[i] != s[j])
            {
                if (cnt2 == 0)
                {
                    omil2 = s[j]; // change
                    cnt2++;
                    j--;
                }
                else
                {
                    if (s[i] == omil2)
                    {
                        cnt2++;
                        i++;
                    }
                    else if (s[j] == omil2)
                    {
                        cnt2++;
                        j--;
                    }
                    else
                    {
                        flag2 = false;
                        break;
                    }
                }
            }
            else
            {
                i++;
                j--;
            }
        }
        if (flag && flag2)
            cout << min(cnt, cnt2) << endl;
        else if (flag)
            cout << cnt << endl;
        else if (flag2)
            cout << cnt2 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
