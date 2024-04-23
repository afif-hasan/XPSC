#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define loop for (ll i = 0; i < n; i++)
#define tst     \
    ll tst;     \
    cin >> tst; \
    while (tst--)
using namespace std;
int main()
{
    fast;
    tst
    {
        ll n;
        cin >> n;
        vector<ll> om(n);
        vector<ll> ady(n);
        ll omStrk = 0, mxom = 0;
        ll adyStrk = 0, mxady = 0;
        loop
        {
            cin >> om[i];
            if (om[i] != 0)
            {
                omStrk++;
            }
            else
            {
                omStrk = 0;
            }
            mxom = max(mxom, omStrk);
        }
        loop
        {
            cin >> ady[i];
            if (ady[i] != 0)
            {
                adyStrk++;
            }
            else
            {
                adyStrk = 0;
            }
            mxady = max(mxady, adyStrk);
        }
        if (mxady > mxom)
            cout << "Addy" << endl;
        else if (mxady < mxom)
            cout << "Om" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}