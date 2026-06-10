#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using ll = long long;
using vll = vector<ll>;

vll findPrefixSums(const vi& a){
    int n = a.size();
    vll b(n+1, 0);
    for (int i = 0; i < n; i++){
        b[i+1] = b[i] + a[i];
    }
    return b;
}

vector<vll> findPrefixSums2D(const vector<vi>& a){
    int  n = a.size();
    int m = a[0].size();
    
    vector<vll> b(n+1, vll(m+1, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            b[i+1][j+1] = b[i][j+1]+b[i+1][j]-b[i][j]+a[i][j];
        }
    }
    return b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}