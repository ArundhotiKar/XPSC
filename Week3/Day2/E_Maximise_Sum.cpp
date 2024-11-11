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
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        
        ll sum = 0;
        int negativeCount = 0;
        int minAbsValue = INT_MAX;

       
        for (int i = 0; i < n; i++) 
        {
            cin >> v[i];
            sum += abs(v[i]);  
            if (v[i] < 0) {
                negativeCount++;
            }
            minAbsValue = min(minAbsValue, abs(v[i]));
        }

        
        if (negativeCount % 2 != 0) {
            sum -= 2 * minAbsValue;
        }

        cout << sum << endl;
    }
    return 0;
}

//Arundhoti Kar@
//From PUST