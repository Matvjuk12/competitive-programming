#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1, n2, n3, n4, n5;
    if (!(cin >> n1 >> n2 >> n3 >> n4 >> n5)) return 0;

    int s1 = n1 + 1;
    int s2 = n2 + 1;
    int s3 = n3 + 1;
    int s4 = n4 + 1;
    int s5 = n5 + 1;

    long long stride4 = s5;
    long long stride3 = s4 * stride4;
    long long stride2 = s3 * stride3;
    long long stride1 = s2 * stride2;
    long long total_size = s1 * stride1;

    vector<long long> b(total_size, 0);

    for (int i1 = 1; i1 <= n1; ++i1) {
        for (int i2 = 1; i2 <= n2; ++i2) {
            for (int i3 = 1; i3 <= n3; ++i3) {
                for (int i4 = 1; i4 <= n4; ++i4) {
                    for (int i5 = 1; i5 <= n5; ++i5) {
                        long long val;
                        cin >> val;
                        long long idx = i1 * stride1 + i2 * stride2 + i3 * stride3 + i4 * stride4 + i5;
                        b[idx] = val;
                    }
                }
            }
        }
    }

    for (int i1 = 1; i1 <= n1; ++i1)
        for (int i2 = 1; i2 <= n2; ++i2)
            for (int i3 = 1; i3 <= n3; ++i3)
                for (int i4 = 1; i4 <= n4; ++i4)
                    for (int i5 = 1; i5 <= n5; ++i5) {
                        long long idx = i1 * stride1 + i2 * stride2 + i3 * stride3 + i4 * stride4 + i5;
                        b[idx] += b[idx - stride1];
                    }

    for (int i1 = 1; i1 <= n1; ++i1)
        for (int i2 = 1; i2 <= n2; ++i2)
            for (int i3 = 1; i3 <= n3; ++i3)
                for (int i4 = 1; i4 <= n4; ++i4)
                    for (int i5 = 1; i5 <= n5; ++i5) {
                        long long idx = i1 * stride1 + i2 * stride2 + i3 * stride3 + i4 * stride4 + i5;
                        b[idx] += b[idx - stride2];
                    }

    for (int i1 = 1; i1 <= n1; ++i1)
        for (int i2 = 1; i2 <= n2; ++i2)
            for (int i3 = 1; i3 <= n3; ++i3)
                for (int i4 = 1; i4 <= n4; ++i4)
                    for (int i5 = 1; i5 <= n5; ++i5) {
                        long long idx = i1 * stride1 + i2 * stride2 + i3 * stride3 + i4 * stride4 + i5;
                        b[idx] += b[idx - stride3];
                    }

    for (int i1 = 1; i1 <= n1; ++i1)
        for (int i2 = 1; i2 <= n2; ++i2)
            for (int i3 = 1; i3 <= n3; ++i3)
                for (int i4 = 1; i4 <= n4; ++i4)
                    for (int i5 = 1; i5 <= n5; ++i5) {
                        long long idx = i1 * stride1 + i2 * stride2 + i3 * stride3 + i4 * stride4 + i5;
                        b[idx] += b[idx - stride4];
                    }

    for (int i1 = 1; i1 <= n1; ++i1)
        for (int i2 = 1; i2 <= n2; ++i2)
            for (int i3 = 1; i3 <= n3; ++i3)
                for (int i4 = 1; i4 <= n4; ++i4)
                    for (int i5 = 1; i5 <= n5; ++i5) {
                        long long idx = i1 * stride1 + i2 * stride2 + i3 * stride3 + i4 * stride4 + i5;
                        b[idx] += b[idx - 1]; 
                    }

    int q;
    if (cin >> q) {
        while (q--) {
            int l1, l2, l3, l4, l5, r1, r2, r3, r4, r5;
            cin >> l1 >> l2 >> l3 >> l4 >> l5 >> r1 >> r2 >> r3 >> r4 >> r5;

            long long ans = 0;

            for (int mask = 0; mask < 32; ++mask) {
                int c1 = (mask & 1)  ? l1 - 1 : r1;
                int c2 = (mask & 2)  ? l2 - 1 : r2;
                int c3 = (mask & 4)  ? l3 - 1 : r3;
                int c4 = (mask & 8)  ? l4 - 1 : r4;
                int c5 = (mask & 16) ? l5 - 1 : r5;

                int popcount = __builtin_popcount(mask);

                long long idx = c1 * stride1 + c2 * stride2 + c3 * stride3 + c4 * stride4 + c5;
                
                if (popcount & 1) {
                    ans -= b[idx];
                } else {
                    ans += b[idx];
                }
            }
            cout << ans << "\n";
        }
    }

    return 0;
}
