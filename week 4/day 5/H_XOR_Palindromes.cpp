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
        string s;
        cin >> s;
        int jhamela = 0, thik = 0;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                jhamela++;
            }
            else
                thik += 2;
        }
        vector<int> t(n + 1);
        if (n % 2 == 0)
        {
            for (int i = 0; i < n + 1; i++)
            {
                if (i < jhamela)
                    t[i] = 0;
                else if (jhamela % 2 == 0)
                {
                    if (i % 2 == 0 && i <= jhamela + thik)
                    {
                        t[i] = 1;
                    }
                    else
                        t[i] = 0;
                }
                else // jhamela odd
                {
                    if (i % 2 == 1 && i <= jhamela + thik)
                    {
                        t[i] = 1;
                    }
                    else
                        t[i] = 0;
                }
            }
        }
        else // n odd
        {
            for (int i = 0; i < n + 1; i++)
            {
                if (i < jhamela)
                    t[i] = 0;
                else if (jhamela % 2 == 0)
                {
                    if (i % 2 == 0 && i <= jhamela + thik)
                        t[i] = 1;
                    else if (i % 2 == 1 && i <= jhamela + thik + 1)
                    {
                        t[i] = 1;
                    }
                    else
                        t[i] = 0;
                }
                else // jhamela odd
                {
                    if (i % 2 == 0 && i <= jhamela + thik + 1)
                        t[i] = 1;
                    else if (i % 2 == 1 && i <= jhamela + thik)
                        t[i] = 1;
                    else
                        t[i] = 0;
                }
            }
        }
        for (int val : t)
            cout << val;
        cout << endl;
    }

    return 0;
}
