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
    while(t--)
    {
        int n;
        in n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            in v[i];
        }
        int mn=1,mx=n;
        int i=0,j=n-1;
        bool f=false;
        while(i<j)
        {
            if(v[i]==mn||v[i]==mx)
            {
               if(v[i]==mx)
               mx--;
               else
               mn++;

               i++;
            }else if(v[j]==mn||v[j]==mx)
            {
               if(v[j]==mx)
               mx--;
               else
               mn++;

               j--;
            }else
            {
                i++;
                j++;
                cout<<i<<" "<<j<<endl;
                f=true;
                break;;
            }
        }
        if(!f)
        cout<<"-1\n";

    } 
  return 0;
}

//Arundhoti Kar@
//From PUST