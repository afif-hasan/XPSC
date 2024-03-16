#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, m;
    cin >> s >> m;
    int cnt = 0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            for (int k = 0; k <= s; k++)
            {
                int sum = i + j + k;
                int mul = i * j * k;
                if (sum <= s && mul <= m)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}