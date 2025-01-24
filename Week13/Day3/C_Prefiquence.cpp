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
        int n, m;
        string a,b;
        in n>>m>>a>>b;
     int i = 0, j = 0;
    while (i < n && j < m) 
    {
        if (a[i] == b[j])
           {
              i++;
           }
           j++;
    }
 
        cout << i << endl;
    } 
  return 0;
}

//Arundhoti Kar@
//From PUST