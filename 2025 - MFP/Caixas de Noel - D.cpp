#include <bits/stdc++.h>

using namespace std;

int n, m;
double f(double x) {
    double a, b;
    a = n;
    b = m;

    return x * (a - 2 * x) * (b - 3 * x) / 3.0;
}

const double eps = 1e-6;

void bb(double l =  0.0, double r = 10000.0) {
    double ans = 0;

    while(abs(r - l) > eps) {
        double m1, m2;

        m1 = l + (r - l) / 3.0; //(2*1 + r)/3
        m2 = r + (r - l) / 3.0; //(2 * r + 1)/3

        if (2 * m1 >= n || 2 * m2 >= n) {
            r = m2;
            continue;
        }

        double f1, f2;

        f1 = f(m1);
        f2 = f(m2);

        if (f1 >= f2) r = m2;
        else l = m1;
        ans = max({ans, f1, f2});
    }
    cout << fixed << setprecision(12);
    cout << l << ' ' << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    bb();

    return 0;
}