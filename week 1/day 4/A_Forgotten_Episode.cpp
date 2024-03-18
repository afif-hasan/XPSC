#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool ar[n + 1];
    memset(ar, false, sizeof(ar));
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        ar[val] = true;
    }
    for (int i = 1; i <= n; i++)
    {
        if (ar[i] == false)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}