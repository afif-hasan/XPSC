#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define loop for (ll i = 0; i < n; i++)
#define tst     \
    ll tst;     \
    cin >> tst; \
    while (tst--)
using namespace std;
int main()
{
    fast;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        if (i & 2)
        {
            cout << 'b';
        }
        else
        {
            cout << 'a';
        }
    }
    cout << endl;
    return 0;
}