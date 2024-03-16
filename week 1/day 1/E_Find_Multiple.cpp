#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int i = 1;
    while (true)
    {
        int m = c * i;
        if (m > a && m < b)
        {
            cout << m << endl;
            break;
        }
        else if (m == a || m == b)
        {
            cout << m << endl;
            break;
        }
        else
        {
            if (m > b)
            {
                cout << -1 << endl;
                break;
            }

            else
                i++;
        }
    }
    return 0;
}