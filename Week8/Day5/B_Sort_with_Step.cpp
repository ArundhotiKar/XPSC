#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {
        int n,k;
        in n>>k;
        vector<int> a(n),s(n),b(n);
        for (int i = 0; i < n; i++)
        {
            in a[i];
        }
        s=a,b=a;
        srt(s);
        
        while(true)
        {
            bool f=false;
            for(int i=0; i<n-k; i++)
            {
                if(a[i+k]<a[i])
                {
                    swap(a[i],a[i+k]);
                    f=true;
                }
            }
            if(!f)
            break;
        }
        if(s==a)
        {
            pr 0 nl;
            continue;
        }
        a=b;
        int r1=-1,r2=-1;
        for(int i=0; i<n; i++)
        {
            if((i+1)==a[i])
            continue;
            int tem=abs(a[i]-(i+1));
            if(tem%k!=0)
            {
                if(r1==-1)
                {
                    r1=i;
                }else
                {
                    r2=i;
                }
            }
            if(r1!=-1 && r2!=-1)
            break;
        }
        swap(a[r1],a[r2]);
        while(true)
        {
            bool f=false;
            for(int i=0; i<n-k; i++)
            {
                if(a[i+k]<a[i])
                {
                    swap(a[i],a[i+k]);
                    f=true;
                }
            }
            if(!f)
            break;
        }
        if(a==s)
        {
            pr 1 nl;
        }else
        {
            pr -1 nl;
        }
        
    }
    return 0;
}

// Arundhoti Kar@
// From PUST