
#include <bits/stdc++.h>
#define ll long long
#define in cin>>
#define srt(a) sort(a.begin(), a.end(), greater<int>());
#define vtr vector<long long>
#define unset unordered_set<long long>
#define pr cout<<
#define nl <<endl;
using namespace std;

int main() {   
    int t;
    in t;
    while (t--) {
        int n, k, l;
        in n >> k >> l;
        
        vector<pair<int, int>> p;
        while (n--) 
        {
            int x, y;
            in x >> y;
            p.push_back({x, y});
        }
        
        vector<int> tem;
        for (int i = 0; i < p.size(); i++) {
            if (p[i].second == l) 
            {  

                tem.push_back(p[i].first);
            }
        }
        
       
        if (tem.size() < k) {
            cout << "-1" << endl;
            continue;
        }
        
        
        srt(tem);
        
        ll sum = 0;
        for (int i = 0; i < k; i++) {  
            sum += tem[i];
        }
        
        cout << sum << endl;
    } 
    return 0;
}
