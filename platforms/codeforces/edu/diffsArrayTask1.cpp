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

vi D;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n;

    vi a(n); 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    D = findDiffsArray(a);

    cin >> q;
    int l, r, d;
    while(q--){
        cin >> l >> r >> d;
        D[l-1] += d;
        D[r] -= d;
    }

    a = findArray(D);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    

    return 0;
}