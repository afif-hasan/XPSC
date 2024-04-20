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
    int n;
    cin >> n;
    map<string, int> mp;
    vector<string> windows(n);
    for (int i = 0; i < n; i++)
    {
        cin >> windows[i];
        mp[windows[i]]++;
    }
    stack<string> st;
    for (int i = 0; i < n; i++)
    {
        if (mp[windows[i]] == 1)
        {
            st.push(windows[i]);
        }
        mp[windows[i]]--;
    }
    while (!st.empty())
    {
        string curString = st.top();
        int size = curString.size();
        cout << curString[size - 2] << curString[size - 1];
        st.pop();
    }
    return 0;
}