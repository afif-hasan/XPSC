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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        reverse(a, a + n);
        multiset<int> m;
        for (int i = 0; i < n; i++)
        {
            if (!m.size())
            {
                m.insert(a[i]);
            }
            else
            {
                int x = *(--m.end());
                if (x >= a[i])
                {
                    m.erase(--m.end());
                    m.insert((x ^ a[i]));
                }
                else
                {
                    m.insert(a[i]);
                }
            }
        }
        cout << m.size() << endl;
    }
    return 0;
}