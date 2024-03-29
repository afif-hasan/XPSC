#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
bool check(int num, vector<int> v)
{
    vector<int> kal;
    for (int val : v)
    {
        if (val != num)
            kal.push_back(val);
    }
    int i = 0, j = kal.size() - 1;
    while (i <= j)
    {
        if (kal[i] == kal[j])
        {
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}
int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int i = 0, j = n - 1;
        bool flag = true;
        int del1, del2;
        while (i <= j)
        {
            if (v[i] == v[j])
            {
                i++;
                j--;
            }
            else
            {
                del1 = v[i];
                del2 = v[j];
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
        {
            if (check(del1, v) || check(del2, v))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}