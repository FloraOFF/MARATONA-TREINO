#include <bits/stdc++.h>

using namespace std;

int v[100010];

int lb(int l, int r, int x) {
    int ans = -1;
    while(l <= r) {
        int mid = (l + r)/2;
        if (v[mid] >= x) {
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

    int n, q;

    cin >> n >> q;

    for(int i = 0; i < n; i++) cin >> v[i];

    while(q--) {
        int x;
        cin >> x;
        int pos = lb(0, n - 1, x);
        if (pos != -1 and v[pos] == x) cout << pos << '\n';
        else cout << -1 << '\n';
    }

    return 0;
}