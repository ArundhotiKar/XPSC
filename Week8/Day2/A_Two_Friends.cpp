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
    int t;
    in t;
    while (t--)
    {
        int n;
        in n;
        int a[n];
        int flag=0;
        for(int i=0; i<n; i++)
        {
            in a[i];
        }
        if (n==2)
        {
            pr "2" nl;
        }
        else
        {
            for(int i=0;i<n; i++)
            {
               
               if(a[a[i]-1]==i+1)
               {
                   pr "2" nl;
                    flag=1;
                    break;
               }
               
            }

            if(flag==0)
            {
                pr "3" nl;
            }
            
               
        }
    }
     
  return 0;
}

//Arundhoti Kar@
//From PUST