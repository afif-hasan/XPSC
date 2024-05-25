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
    int n;
    cin >> n;
    vector<int> boy(n);
    for (int i = 0; i < n; i++)
    {
        cin >> boy[i];
    }
    int m;
    cin >> m;
    vector<int> girl(m);
    for (int i = 0; i < m; i++)
    {
        cin >> girl[i];
    }
    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((boy[i] == girl[j]) || (boy[i] + 1 == girl[j]) || (boy[i] == girl[j] + 1))
            {

                sum += 1;
                girl[j] = -7;
                break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}