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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            in v[i];
        }
        for(int i=0; i<n; i++)
        {
            int len;
            in len;
            string s;
            in s;
            for(char c:s)
            {
                if(c=='U')
                v[i]--;
                else
                v[i]++;

                if(v[i]==10)
                v[i]=0;

                if(v[i]==-1)
                v[i]=9;
            }
        }
        for(auto i: v)
        {
            pr i <<" ";
        }
        cout<<endl;
     }
     
  return 0;
}

//Arundhoti Kar@
//From PUST