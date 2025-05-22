#include <bits/stdc++.h>

using namespace std;

int a[20010];
int n, q;

long long f(long long m) {
    long long sum = 0;

    for(int i = 0; i < n; i++) {
        sum += m/a[i];
        if (sum >= q) return true;
    }
}

long long bb(long long l = 1, long long r = 1000000000000000000) {
    long long ans = -1;
    while(l <= r) {
        long long mid = (l + r)/2;
        if (f(mid)) {
            r = mid - 1;
            ans = mid;
        }
        else l = mid + 1;
    }
    return ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> q;

    for(int i = 0; i < n; i++) cin >> a[i];

    cout << bb() << '\n';

    return 0;
}