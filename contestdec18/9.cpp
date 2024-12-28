#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;

    while (tc--) {
        long long n, x, y;
        cin >> n >> x >> y;
        vector<long long> v(n);
        long long totalSum = 0;
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
            totalSum += v[i];
        }
        long long lowerBound = totalSum - y;
        long long upperBound = totalSum - x;
        sort(v.begin(), v.end());
        long long cnt = 0;
        for (long long i = 0; i < n; i++) {
            long long targetLower = lowerBound - v[i];
            long long targetUpper = upperBound - v[i];
            long long left = lower_bound(v.begin() + i + 1, v.end(), targetLower) - v.begin();
            long long right = upper_bound(v.begin() + i + 1, v.end(), targetUpper) - v.begin();
            cnt += (right - left); 
        }

        cout << cnt << endl;
    }

    return 0;
}
