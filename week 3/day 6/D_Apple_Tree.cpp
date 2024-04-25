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
const ll N = 200005;
vector<ll> adj[N];
bool vis[N];
vector<ll> cnt(N);
void dfs(ll src)
{
    vis[src] = true;
    if (adj[src].size() == 1 && src != 1) // if it's a leaf node except the root
    {
        cnt[src] = 1;
        return;
    }

    for (ll child : adj[src])
    {
        if (vis[child] == false)
        {
            dfs(child);
            cnt[src] += cnt[child];
        }
    }
}
int main()
{
    fast;
    tst
    {
        ll n;
        cin >> n;
        memset(vis, false, sizeof(vis));
        for (ll i = 1; i <= n; i++)
        {
            adj[i].clear();
        }
        for (ll i = 1; i <= n; i++)
        {
            cnt[i] = 0;
        }
        for (ll i = 1; i <= n - 1; i++)
        {
            ll a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(1);
        ll q;
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            cout << cnt[x] * cnt[y] << endl;
        }
    }
    return 0;
}