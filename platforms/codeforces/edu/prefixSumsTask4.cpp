#include<bits/stdc++.h>

using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>; 

vector<vll> findPrefixSums2D(const vector<vi>& a, int n, int m){
    vector<vll> b(n+1, vll(m+1, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            b[i+1][j+1] = b[i][j+1]+b[i+1][j]-b[i][j]+a[i][j];
        }
    }
    return b;
}

vector<vll> c;

void solve(){
    int rx, ry, lx, ly;
    cin >> lx >> ly >> rx >> ry;
    cout << c[rx][ry] - c[lx-1][ry] - c[rx][ly-1] + c[lx-1][ly-1] << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, q;
    cin >> n >> m;

    vector<vi> a(n, vi(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }  

    c = findPrefixSums2D(a, n, m);

    cin >> q;
    while(q--){
        solve();
    }
    return 0;
}