#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

vll findDiffsArray(const vll& a){
    int n = a.size();
    vll d(n+1, 0);

    d[0] = a[0];

    for(int i = 1; i < n; i++){
        d[i] = a[i] - a[i-1];
    }
    return d;
}

vll findArray(const vll& d){
    int n = d.size() - 1;
    vll a(n, 0);

    a[0] = d[0];
    for (int i = 1; i < n; i++){
        a[i] = a[i-1] + d[i];
    }

    return a;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n;

    vll a(n); 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vll D = findDiffsArray(a);

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