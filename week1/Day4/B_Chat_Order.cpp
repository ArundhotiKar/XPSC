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
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        in v[i];
    }
     map<string,int>m;
     for(int i=n-1; i>=0; i--)
     {

        if(m[v[i]]==0)
        {
            cout<<v[i]<<endl;
            m[v[i]]++;
        }
     }
     
  return 0;
}

//Arundhoti Kar@
//From PUST