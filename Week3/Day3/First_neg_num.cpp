#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        int l=0,r=0;
        queue<int>q;
        vector<int>ans;
        while(r<arr.size())
        {
            if(arr[r]<0)
            {
                q.push(arr[r]);
            }
            if(r-l+1==k)
            {
                if(!q.empty())
                {
                     ans.push_back(q.front());
                     if(arr[l]==q.front())
                     {
                        q.pop();
                     }
                }else
                {
                    ans.push_back(0);
                }
                l++;
                r++;
            }else
            {
                r++;
            }
        }
        return ans;
    }
int main()
{   
     int n;
     in n;
     vector<int>v(n);
     for(int i=0; i<n; i++)
     in v[i];

     int k;
     in k;
   vector<int>vv=FirstNegativeInteger(v,k);
   for(int i:vv)
   cout<<i<<" ";
  return 0;
}

//Arundhoti Kar@
//From PUST