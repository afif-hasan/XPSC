#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vector<string> p1(n), p2(n), p3(n);
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> p1[i];
            mp[p1[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p2[i];
            mp[p2[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p3[i];
            mp[p3[i]]++;
        }
        int scr1 = 0, scr2 = 0, scr3 = 0;
        for (string s : p1)
        {
            if (mp[s] == 1)
                scr1 += 3;
            else if (mp[s] == 2)
                scr1 += 1;
            else if (mp[s] == 3)
                scr1 += 0;
        }

        for (string s : p2)
        {
            if (mp[s] == 1)
                scr2 += 3;
            else if (mp[s] == 2)
                scr2 += 1;
            else if (mp[s] == 3)
                scr2 += 0;
        }

        for (string s : p3)
        {
            if (mp[s] == 1)
                scr3 += 3;
            else if (mp[s] == 2)
                scr3 += 1;
            else if (mp[s] == 3)
                scr3 += 0;
        }
        cout << scr1 << " " << scr2 << " " << scr3 << endl;
    }
    return 0;
}