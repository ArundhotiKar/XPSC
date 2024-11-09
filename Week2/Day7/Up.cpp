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
        int n,m;
        in n>>m;
        string a,b;
        in a;
        set<int>v;
        for(int i=0; i<m; i++)
        {
            int p;
            in p;
            v.insert(p);
        }

        in b;
        sort(b.begin(),b.end());
        int j=0;
        for(auto i: v)
        {
            if(i<=n)
            {
                a[i-1]=b[j];
                j++;
            }
        }
        pr a nl;

    } 
  return 0;
}

//Arundhoti Kar@
//From PUST
