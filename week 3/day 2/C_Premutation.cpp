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
        int mat[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> mat[i][j];
            }
        }
        map<int, int> mp;
        int f_val;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            mp[mat[i][0]]++;
            if (mp[mat[i][0]] > 1)
            {
                f_val = mat[i][0];
                v.push_back(f_val);
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (mat[i][0] != f_val)
            {
                for (int j = 0; j < n - 1; j++)
                    v.push_back(mat[i][j]);
            }
        }
        for (int val : v)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}