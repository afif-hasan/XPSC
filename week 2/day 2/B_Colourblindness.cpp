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
        int col;
        cin >> col;
        bool flag = true;
        string r1, r2;
        cin >> r1 >> r2;
        for (int i = 0; i < col; i++)
        {
            if (r1[i] == 'R')
            {
                if (r2[i] != 'R')
                    flag = false;
            }
            else if (r1[i] == 'G' || r1[i] == 'B')
            {
                if (r2[i] == 'R')
                    flag = false;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}