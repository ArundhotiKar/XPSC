#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int main()
{
  int t;
  in t;
  while (t--)
  {
    ll a, b, c;
    in a >> b >> c;
    set<ll> s;
    for (int i = 0; i < b; i++)
    {
      ll p;
      in p;
      s.insert(p);
    }
    while (c--)
    {
      ll p;
      in p;
      auto upper = s.upper_bound(p);
      auto lower =s.lower_bound(p);
      if (upper == s.end())
      {
        auto it = prev(s.end());
        cout << a - *it << endl;
      }else if(lower==s.begin()&&p<*lower)
      {
          cout<<*lower-1<<endl;
      }else
      {
        ll d1=*upper-p;
        lower--;
        ll d2=p-*lower;
        d1+=d2;
        cout<<d1/2<<endl;
      }
    }
  }
  return 0;
}

// Arundhoti Kar@
// From PUST
