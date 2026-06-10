#include <bits/stdc++.h>

using namespace std; 

using vi = vector<int>;
using ll = long long;
using vll = vector<long long>;

vll findPrefixSums(const vi& a, int n){
    vll b(n+1, 0);
    for(int i = 0; i < n; i++){
        b[i+1] = b[i] + a[i];
    }

    return b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vi a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vll b = findPrefixSums(a, n);

    for(int i = 0; i < n+1; i++){
        cout << b[i] << " ";
    }

    return 0;
}