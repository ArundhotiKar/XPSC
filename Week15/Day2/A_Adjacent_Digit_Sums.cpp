#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    
    while (t--) {
        int n;
        cin >> n; // length of the array
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Step 1: Count the frequencies of each number in the array
        vector<int> freq(n + 1, 0);  // Since ai is between 1 and n
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }
        
        // Step 2: Check if we can balance the bags
        bool possible = true;
        int total_moves = 0;
        
        for (int i = 1; i <= n; i++) {
            if (freq[i] > n / 2) {
                possible = false;
                break;
            }
        }
        
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
