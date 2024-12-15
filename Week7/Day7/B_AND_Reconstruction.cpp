#include<bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    in t; 
    while (t--) {
        int n;
        in n; 
        vector<ll> b(n - 1), a(n);
        
        for (int i = 0; i < n - 1; i++) {
            in b[i];
        }
        
        a[0] = b[0];
        a[n - 1] = b[n - 2];
        
        bool f = true;
        for (int i = 1; i < n - 1; i++) {
            a[i] = b[i - 1] | b[i];
        }
        
        for (int i = 0; i < n - 1; i++) {
            if ((a[i] & a[i + 1]) != b[i]) {
                f = false;
                break;
            }
        }
        
        if (f) {
            for (int i = 0; i < n; i++) {
                pr a[i] << " ";
            }
        } else {
            pr "-1";
        }
        pr "\n";
    }

    return 0;
}

//Arundhoti Kar@
//From PUST