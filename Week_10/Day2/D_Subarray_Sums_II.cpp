#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    long long n, x;
    cin >> n >> x;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<long long, long long> prefix_count;
    prefix_count[0] = 1;

    long long current_sum = 0,result = 0;

    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        result += prefix_count[current_sum - x];
        prefix_count[current_sum]++;
    }

    cout << result << "\n";
    return 0;
}
