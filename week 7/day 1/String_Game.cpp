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

        int n, cnt = 0;
        string s;
        cin >> n >> s;
        stack<char> st;
        for (auto i : s)
        {
            if (!st.empty() && st.top() != i)
            {
                st.pop();
                cnt++;
            }
            else
                st.push(i);
        }
        if (cnt % 2 == 0)
            cout << "Ramos";
        else
            cout << "Zlatan";
        cout << endl;
    }
    return 0;
}