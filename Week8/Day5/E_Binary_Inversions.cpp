#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout <<
#define nl << endl;
using namespace std;
ll InvCnt(vector<int> a,int n){
    ll res=0,one=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            one++;
        }
        else{
            res+=one;
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {
        int n;
        in n;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            in a[i];
        }
        b = a, c = a;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 0)
            {
                b[i] = 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (c[i] == 1)
            {
                c[i] = 0;
                break;
            }
        }
        ll cnt1=InvCnt(b,n);
        ll cnt2=InvCnt(c,n);
        ll ans=InvCnt(a,n);
        ans=max(ans,cnt1);
        pr max(ans,cnt2) nl;
    }
    return 0;
}

// Arundhoti Kar@
// From PUST