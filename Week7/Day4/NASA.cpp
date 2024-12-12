#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
int maxSize=(1LL<<15);
vector<int>allPalindrome;
bool isPalindrome(int x) {
   string s = to_string(x);
   int len = s.size();
   for (int i = 0;i < len / 2;i++) {
      if (s[i] != s[len - i - 1]) {
         return false;
      }
   }
   return true;
}
void allPalindromeFound()
{
    for(int i=0; i<maxSize; i++ )
    {
        if(isPalindrome(i))
        {
            allPalindrome.push_back(i);
        }
    }
}
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
   allPalindromeFound();
   int t;
   in t;
   while(t--)
   {
      int n;
      in n;
      vector<int>v(n),cnt(maxSize + 1);
      
      for(int i=0; i<n; i++)
      {
        in v[i];
        cnt[v[i]]++;
      }
      ll ans=n;
      for(int i=0; i<n; i++)
      {
        for(int j=0; j<allPalindrome.size(); j++)
        {
           int c=(v[i]^allPalindrome[j]);
           ans+=cnt[c];
        }
      }
      pr ans/2 nl;

   }
  return 0;
}

//Arundhoti Kar@
//From PUST