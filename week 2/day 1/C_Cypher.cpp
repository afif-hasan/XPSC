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
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            string s;
            cin >> s;
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == 'D')
                {
                    v[i]++;
                }
                else
                    v[i]--;
            }
            if (v[i] < 0)
                ans.push_back(10 + v[i]);
            else if (v[i] > 9)
                ans.push_back(v[i] - 10);
            else
                ans.push_back(v[i]);
        }
        for (int val : ans)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}