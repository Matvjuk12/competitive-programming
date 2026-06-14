#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>; 

int maxLenOfSum(const vi& a, int x){
    int l = 0;
    ll s = 0;
    int len = 0;
    int n = a.size();

    for(int r = 0; r < n; r++){
        s += a[r];

        while(s > x && l < r){
            s -= a[l];
            l++;
        }

        len = max(len, r - l + 1);
    }

    return len;
}

int main(){
    return 0;
}