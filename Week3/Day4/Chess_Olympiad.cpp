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
     int x,y,z;
     in x>>y>>z;

     double p=0.5*y + 4 -(y+z);
     
     double q=z+(y*0.5);

     if(p>q)
     cout<<"YES\n";
     else
     cout<<"NO\n";
  return 0;
}

//Arundhoti Kar@
//From PUST