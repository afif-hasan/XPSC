#include <bits/stdc++.h>
#define endl '\n'
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define modulo 1000000007
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
        ll n, q, src;
        cin >> n >> q >> src;
        queue<ll> que;
        que.push(src);
        while (q--)
        {
            ll dist;
            char dir;
            cin >> dist >> dir;
            set<ll> s;
            while (!que.empty())
            {
                ll pr = que.front();
                que.pop();
                if (dir == '?' || dir == '0')
                {
                    ll ins = (pr + dist) % n;
                    if (ins == 0)
                    {
                        s.insert(n);
                    }
                    else
                        s.insert(ins);
                }
                if (dir == '?' || dir == '1')
                {
                    ll ins = (pr - dist + n) % n;
                    if (ins == 0)
                    {
                        s.insert(n);
                    }
                    else
                        s.insert(ins);
                }
            }
            for (auto val : s)
            {
                que.push(val);
            }
        }
        set<ll> res;
        while (!que.empty())
        {
            res.insert(que.front());
            que.pop();
        }
        cout << res.size() << endl;
        for (auto val : res)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}
