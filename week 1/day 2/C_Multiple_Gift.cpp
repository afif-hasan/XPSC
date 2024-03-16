#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    ll x, y;
    cin >> x >> y;
    ll i = 2;
    ll cnt = 1;
    while ((x * i) <= y)
    {
        cnt++;
        x = x * i;
    }
    cout << cnt << endl;
    return 0;
}