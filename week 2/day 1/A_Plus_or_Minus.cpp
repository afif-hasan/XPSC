#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
int main()
{
    int ts;
    cin >> ts;
    while (ts--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
            cout << '+' << endl;
        else
            cout << '-' << endl;
    }
    return 0;
}