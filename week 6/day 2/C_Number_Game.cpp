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
bool alicewin(int mid, multiset<int> st)
{

    int k = mid;
    for (int i = 1; i <= k; i++)
    {
        if (st.empty()) // stage sesh hwer agei empty hwe gese
            return false;
        int alicedel = k - i + 1;
        auto it = st.upper_bound(alicedel);
        if (it == st.begin()) // ekdm first value orthat less than k-i+1 set e nai
            return false;
        it--; // ager value tai less than equal k-i+1
        st.erase(it);

        if (!st.empty())
        {
            it = st.begin();
            int val = *it;
            val = val + k - i + 1;
            st.erase(it);
            st.insert(val);
        }
    }
    return true;
}
int main()
{
    fast;
    tst
    {
        int n;
        cin >> n;
        multiset<int> st;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            st.insert(val);
        }
        int l = 0, r = n, ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (alicewin(mid, st))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}