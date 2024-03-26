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
        stack<char> st;
        int n;
        cin >> n;
        vector<char> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (char c : v)
        {
            if (c == '(')
                st.push(c);
            else
            {
                if (st.empty())
                    continue;
                else
                {
                    if (c == ')')
                        st.pop();
                }
            }
        }
        int cnt = 0;
        while (!st.empty())
        {
            cnt++;
            st.pop();
        }
        cout << cnt << endl;
    }
    return 0;
}