#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}