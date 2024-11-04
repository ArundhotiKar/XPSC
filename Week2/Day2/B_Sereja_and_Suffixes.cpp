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
    int n,m;
    cin>>n>>m;
    int a[n]; 
    for(int i=0; i<n; i++)
    cin>>a[i];
    set<int>s;
    int distinc_count[n];
    for(int i=n-1; i>=0; i--)
    {
        s.insert(a[i]);
        distinc_count[i]=s.size();
    }
    
    while(m--)
    {
        
        int b;
        cin>>b;
        cout<<distinc_count[b-1]<<endl;
    }
  return 0;
}

//Arundhoti Kar@
//From PUST