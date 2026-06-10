#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;

vi findDiffsArray(const vi& a){
    int n = a.size();
    vi d(n+1, 0);

    d[0] = a[0];

    for(int i = 1; i < n; i++){
        d[i] = a[i] - a[i-1];
    }
    return d;
}

vi findArray(const vi& d){
    int n = d.size() - 1;
    vi a(n, 0);

    a[0] = d[0];
    for (int i = 1; i < n; i++){
        a[i] = a[i-1] + d[i];
    }

    return a;
}