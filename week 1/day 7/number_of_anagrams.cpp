#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
bool anagram(vector<int> cnt)
{
    for (int val : cnt)
    {
        if (val != 0)
            return false;
    }
    return true;
}
int main()
{
    string s, t;
    cin >> s >> t;
    vector<int> cnt(26, 0);
    for (char c : s)
    {
        cnt[c - 'a']++;
    }
    int l = 0, r = 0, ans = 0;
    int k = s.length();
    int n = t.length();
    while (r < n)
    {
        cnt[t[r] - 'a']--; // cnt minus kore dicchi
        if (r - l + 1 == k)
        {
            if (anagram(cnt)) // shbgular count zero  kina
            {
                ans++;
            }
            cnt[t[l] - 'a']++; // shurur tar cnt abar plus kore dicchi
            l++;
        }
        r++; // window slide kore niye ashtesi
    }
    cout << ans << endl;
    return 0;
}