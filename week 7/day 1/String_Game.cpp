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
        int omil = 0;
        stack<char> st;
        for (char c : s)
        {
            if (!st.empty() && st.top() != c)
            {
                st.pop();
                omil++;
            }
            else
                st.push(c);
        }
        if (omil % 2 == 0)
            cout << "Ramos" << endl;
        else
            cout << "Zlatan" << endl;
    }
    return 0;
}
