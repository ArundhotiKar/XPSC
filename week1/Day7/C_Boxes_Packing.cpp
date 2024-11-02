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
    int n;
    in n;
    vector<long long>v(n);
    map<int,bool>mp;
    for(int i=0; i<n; i++)
    {
         in v[i];
         mp[i]=false;
    } 
    sort(v.begin(), v.end());
   

   int cnt=0;
    for(int i=0; i<n; i++)
    {
         for(int j=i+1; j<n; j++)
         {
            if(v[i]<v[j]&& mp[j]!=true)
            {
                cnt++;
                mp[j]=true;
                j=n;
            }
         }
    }
    cout<<n-cnt<<endl;
  return 0;
}

//Arundhoti Kar@
//From PUST