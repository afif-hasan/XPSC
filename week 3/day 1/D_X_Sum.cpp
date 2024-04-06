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
        int row, col;
        cin >> row >> col;
        int mat[row][col];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> mat[i][j];
            }
        }
        ll sum = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                sum += mat[i][j];
                while (i < row && j < col)
                {
                    sum += mat[]
                }
            }
        }
    }
    return 0;
}