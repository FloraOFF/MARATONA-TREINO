#include <bits/stdc++.h>

using namespace std;

int v[100010];

int ub (int l, int r, int x) {
    int ans = -1;
    while (l <= r) {
        int mid = (l + r)/2;
        if (v[mid] > x) {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return ans;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int x;
    while(cin >> x) 
    {
        cout << ub(0, n - 1, x) << '\n';
    }

    return 0;
}