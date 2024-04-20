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
        string a, b;
        cin >> a >> b;
        int cnta = 0, cntb = 0;
        for (char c : a)
        {
            if (c == 'L')
            {
                for (char p : b)
                {
                    if (p == 'M' || p == 'S')
                        cout << ">" << endl;
                    else if (p == 'L')
                    {
                        if (cnta > cntb)
                            cout << ">" << endl;
                        else if (cnta < cntb)
                            cout << "<" << endl;
                        else
                            cout << "=" << endl;
                    }
                    else
                        cntb++;
                }
            }
            else if (c == 'S')
            {
                for (char p : b)
                {
                    if (p == 'M' || p == 'L')
                        cout << "<" << endl;
                    else if (p == 'S')
                    {
                        if (cnta > cntb)
                            cout << "<" << endl;
                        else if (cnta < cntb)
                            cout << ">" << endl;
                        else
                            cout << "=" << endl;
                    }
                    else if (p == 'X')
                        cntb++;
                }
            }
            else if (c == 'M')
            {
                for (char p : b)
                {
                    if (p == 'S')
                        cout << ">" << endl;
                    else if (p == 'L')
                    {
                        cout << "<" << endl;
                    }
                    else if (p == 'M')
                        cout << "=" << endl;
                }
            }
            else if (c == 'X')
                cnta++;
        }
    }
    return 0;
}