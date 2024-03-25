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
        string s;
        cin >> s;
        bool flag = true;
        map<char, int> mp;
        if (n > 5 || n < 5)
        {
            flag = false;
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                if (s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r')
                {
                    mp[s[i]]++;
                    continue;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                for (auto it = mp.begin(); it != mp.end(); it++)
                {
                    if (it->second != 1)
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}