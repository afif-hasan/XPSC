#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define modulo 1000000007
#define tst     \
    ll tst;     \
    cin >> tst; \
    while (tst--)
using namespace std;
int main()
{
    fast;
    int n;
    cin >> n;
    unordered_map<int, int> factors;
    while (n--)
    {
        int strength;
        cin >> strength;

        int root = sqrt(strength);
        for (int i = 2; i <= root; i++)
        {
            if (strength % i == 0)
                factors[i]++;

            while (strength % i ==
                   0)
                strength /= i;
        }

        if (strength > 1)
            factors[strength]++;
    }
    int ans = 1;
    for (auto it = factors.begin(); it != factors.end(); it++)
    {
        ans = max(ans, (*it).second);
    }

    cout << ans << endl;
    return 0;
}