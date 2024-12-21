#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
ll solve(vector<ll>& a) {
    int n = a.size();
    ll operations = 0;

    for (int i = n - 2; i >= 0; --i) 
    {
        while (a[i] >= a[i + 1])
         {
            if (a[i] == 0) 
            return -1;
            a[i] /= 2;
            ++operations;
        }
    }
    return operations;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    in t;
    while (t--) 
    {
        int n;
        in n;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        in a[i];

        ll result = solve(a);
        pr result << '\n';
    }

    return 0;
}

//Arundhoti Kar@
//From PUST