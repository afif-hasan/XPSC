#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int l = 0;
    int r = 0;
    vector<int> v;
    queue<int> q;
    while (r < n)
    {
        if (ar[r] < 0)
        {
            q.push(ar[r]);
        }
        if (r - l + 1 == k)
        {
            if (!q.empty())
            {
                v.push_back(q.front());
            }
            else
                v.push_back(0);

            if (ar[l] < 0)
            {
                q.pop();
            }
            l++;
            r++;
        }
        else
            r++;
    }
    for (int val : v)
        cout << val << " ";
    return 0;
}