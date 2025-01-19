#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
const ll MOD=1e9+7;
ll power(ll x, ll y)
{
  ll ans=1%MOD;
  while(y)
 {
    if(y&1)
    {
       ans=(1LL * ans % MOD * x %MOD) % MOD;
    }
    x=1LL * x * x % MOD ;
    y >>= 1; 
 }
  return ans;
}
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int n, m;
    in n >> m;

    vector<string> strings(n);
    unordered_set<string> seen;
    unordered_set<string> used;
    string left, right, middle = "";

    
    for (int i = 0; i < n; i++) {
        in strings[i];
        seen.insert(strings[i]);
    }

    
    for (int i = 0; i < n; i++) {
        string s = strings[i];
        string rev = s;
        reverse(rev.begin(), rev.end());

        if (seen.count(rev) && used.count(s) == 0 && used.count(rev) == 0 && s != rev) 
        {
            
            left += s;
            right = rev + right;
            used.insert(s);
            used.insert(rev);
        } else if (s == rev && middle == "") 
        {
            middle = s;
            used.insert(s);
        }
    }

    string palindrome = left + middle + right;

    pr palindrome.length() << "\n";
    if (!palindrome.empty()) {
        pr palindrome << "\n";
    } 
  return 0;
}

//Arundhoti Kar@
//From PUST