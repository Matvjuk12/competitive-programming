#include <bits/stdc++.h>

using namespace std;

using vi = vector<int>;
using ll = long long;
using vll = vector<ll>;
using pii = pair<int, int>;

pii sumIsGone(const vi& a, int x){
    int l = 0, r = a.size() - 1;
    ll s = 0;
    while(l < r){
        s = a[l] + a[r];
        if(s == x){
            return pii(l, r);
        }
        else if(s < x){
            l++;
        }
        else{
            r--;
        }
    }
    return pii(-1, -1);
}

int main(){
    return 0;
}