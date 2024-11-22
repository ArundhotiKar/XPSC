// #include <bits/stdc++.h>
// #define ll long long
// #define in cin >>
// #define srt(a) sort(a.begin(), a.end());
// #define vtr vector<long long>
// #define unset unordered_set<long long>
// #define pr cout <<
// #define nl << endl;
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, k;
//     in n >> k;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         in v[i];
//     }
//     map<int, int> cnt;
//     int l = 0, r = 0;
//     ll ans = 0;
//     while (r < n)
//     {
//         cnt[v[r]]++;
//         if (cnt.size() <= k)
//         {
//             ans += (r - l + 1);
//         }
//         else
//         {
//             while (cnt.size() > k)
//             {
//                 cnt[v[l]]--;
//                 if (cnt[v[l]] == 0)
//                 {
//                     cnt.erase(v[l]);
//                 }
//                 l++;
//             }
//             if (cnt.size() <= k)
//               ans += (r - l + 1);
//         }
//         r++;
//     }
//     pr ans nl;

//     return 0;
// }

// // Arundhoti Kar@
// // From PUST
#include <bits/stdc++.h>
using namespace std;

int* sort_it( int n)
{
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());
    return a;
}

int main() {
    int n;
    cin >> n;
    
     
    
    int *a=sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}