#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int i = 1;
    double T = t + 0.5;
    int cnt = 0;
    while ((a * i) < T)
    {
        cnt = cnt + b;
        i++;
    }
    cout << cnt << endl;
    return 0;
}