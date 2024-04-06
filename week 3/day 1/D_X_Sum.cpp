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
    ll tst;
    cin >> tst;
    while (tst--)
    {
        ll row, col;
        cin >> row >> col;
        ll mat[row][col];
        for (ll i = 0; i < row; i++)
        {
            for (ll j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }

        ll ans = INT_MIN;
        for (ll i = 0; i < row; i++)
        {
            for (ll j = 0; j < col; j++)
            {
                ll sum_prim = 0;
                ll sum_sec = 0;
                ll l = i, k = j;
                while (l < row && k < col) // mat[i][j]ekhanei calculated
                {
                    sum_prim += mat[l][k];
                    l++;
                    k++;
                }
                l = i - 1, k = j - 1;
                while (l >= 0 && k >= 0)
                {
                    sum_prim += mat[l][k];
                    l--;
                    k--;
                }
                // sum of secondary diagonal part
                l = i + 1, k = j - 1;
                while (l < row && k >= 0)
                {
                    sum_sec += mat[l][k];
                    l++;
                    k--;
                }
                l = i - 1, k = j + 1;
                while (l >= 0 && k < col)
                {
                    sum_sec += mat[l][k];
                    l--;
                    k++;
                }
                ans = max(ans, sum_prim + sum_sec);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
