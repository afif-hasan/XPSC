#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
int main()
{
    fast;
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = true;
        int i = 0;
        if (s[i] == 'm' || s[i] == 'M')
        {
            while (s[i] == 'm' || s[i] == 'M')
            {
                i++;
            }
            if (s[i] == 'e' || s[i] == 'E')
            {
                while (s[i] == 'e' || s[i] == 'E')
                {
                    i++;
                }
                if (s[i] == 'o' || s[i] == 'O')
                {
                    while (s[i] == 'o' || s[i] == 'O')
                    {
                        i++;
                    }
                    if (s[i] == 'w' || s[i] == 'W')
                    {
                        while (s[i] == 'w' || s[i] == 'W')
                        {
                            i++;
                        }
                        if (s[i] != NULL)
                            flag = false;
                    }
                    else
                        flag = false;
                }
                else
                    flag = false;
            }
            else
                flag = false;
        }
        else
            flag = false;
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}