#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
using namespace std;
int main()
{   
     int q;
     in q;
     while(q--)
     {
        ll a,b,n,s;
        in a>>b>>n>>s;
        ll tem=s/n;
        if(tem<=a)
        {
            if(s%n==0)
            {
                yes;
            }else
            {
                if(s%n<=b)
                {
                    yes;
                }else
                {
                    no;
                }
            }
        }else
        {
            if(a*n +b >=s)
            {
                yes;
            }else
            {
                no;
            }
        }
     }
  return 0;
}

//Arundhoti Kar@
//From PUST