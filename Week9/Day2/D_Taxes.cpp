#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;

bool isPrime(int n) 
{
   if (n == 1) {
      return false;
   }

   for (int i = 2;i * i <= n;i++) 
   {
      if (n % i == 0) {
         return false;
      }
   }
   return true;
}
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  ll n;
  in n;
  if (isPrime(n))
  {
     pr 1 nl;
  }else if(n%2==0)
  {
    pr 2 nl;
  }else
  {
    if(isPrime(n-2))
    {
      pr 2 nl;
    }else
    {
       pr 3 nl;
    }
  }
   
  return 0;
}

//Arundhoti Kar@
//From PUST