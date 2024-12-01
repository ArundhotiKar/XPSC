#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
void solve()
{
   int n, k;
   in n >> k;
   ll v[k];
   for (int i = 0; i < k; i++)
      in v[i];
   if (k == 1)
   {
      pr "YES\n";
      return;
   }
   vector<ll> ans(n);
   ll j = n - 1;
   for (int i = k - 1; i >= 1; i--)
   {
      ans[j] = v[i] - v[i - 1];
      j--;
   }
   while (j >= 0)
   {
      ans[j] = ans[j + 1];
      v[0] -= ans[j];
      j--;
   }
   ans[0] += v[0];
   if (is_sorted(ans.begin(), ans.end()))
   {
      cout << "YES" << endl;
   }
   else
   {
      cout << "NO" << endl;
   }
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   in t;
   while (t--)
   {
      solve();
   }
   return 0;
}

// Arundhoti Kar@
// From PUST