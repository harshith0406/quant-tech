#include <bits/stdc++.h>
using namespace std;

int maxi(vector<int> &a, int n, int k) {
    int presum = 0;

    for (int i = 0; i < k; i++) {
        presum += a[i];
    }

    if (presum == 0) {
        return k;
    }

    for (int i = 1; i <= n - k; i++) {
        presum += a[i + k - 1];
        presum -= a[i - 1];

        if (presum == 0) {
            return i + k;
        }
    }

    return -1;
}

int main() {
    vector<int> a{0, 1, 2, 3, -2, -1};
    int n = a.size();
    int k = 3;
    int res1 = maxi(a, n, k);

    if (res1 != -1) {
        int start = res1 - k;
        cout << "result: " << start << " till " << res1 - 1 << endl;
    } else {
        cout << "No subarray found with sum zero in the given range." << endl;
    }

    return 0;
}
