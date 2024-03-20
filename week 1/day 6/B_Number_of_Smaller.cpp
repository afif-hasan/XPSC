#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int ar[m];
    int arr[n];
    for (int i = 0; i < m; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (arr[i] > ar[j] && j < m)
        {
            cnt++;
            j++;
        }
        cout << cnt << " ";
    }
    return 0;
}