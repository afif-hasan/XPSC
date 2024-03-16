#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (mp[i] == 0)
        {
            cout << i << endl;
            break;
        }
        if (i == 'z' && mp[i] != 0)
            cout << "None" << endl;
    }
    return 0;
}