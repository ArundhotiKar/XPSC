#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
int main()
{   
  ios::sync_with_stdio(false);
  cin.tie(nullptr); 
  int t;
  in t;
  while(t--)
  {
     int n;
     in n;
     vector< long long>a(n);
     for(int i=0; i<n; i++)
     {
        in a[i];
     }
     for(int i=0; i<n-1; i++)
     {
         a[i+1]=a[i]|a[i+1];
     }
     pr a[n-1] nl;
  } 
  return 0;
}

//Arundhoti Kar@
//From PUST