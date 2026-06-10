#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

vll findPrefixXOR(const vi& a, int n){
    vll b(n+1, 0);

    for(int i = 0; i < n; i++){
        b[i+1] = b[i] ^ a[i];
    }

    return b;
}

vll c;

void solve(){
    int l, r;
    cin >> l >> r;
    cout << (c[r] ^ c[l-1]) << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n;
    vi a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    c = findPrefixXOR(a, n);

    cin >> q;

    while(q--){
        solve();
    }

    return 0;
}