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
        int n, length;
        cin >> n >> length;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            string s;
            cin >> s;
            v.push_back(s);
        }
        int mn = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = 0;
                for (int k = 0; k < length; k++)
                {
                    sum += abs(v[i][k] - v[j][k]);
                }
                mn = min(mn, sum);
            }
        }
        cout << mn << endl;
    }
    return 0;
}