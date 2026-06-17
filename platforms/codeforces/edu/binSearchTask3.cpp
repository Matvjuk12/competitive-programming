#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
//#pragma GCC optimize ("O3")
//#pragma GCC target ("avx2")

using namespace std;
using namespace __gnu_pbds;

#define vec vector
#define pq priority_queue
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define sz(a) (int)(a).size()
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)
#define sor(x) sort(all(x))
#define bg(x) begin(x)
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()
#define lb lower_bound
#define ub upper_bound
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#ifdef LOCAL
#define dbg(args...) err_prefix(__FUNCTION__, __LINE__, #args), err(args)
#define dbgn(args...) err_prefix(__FUNCTION__, __LINE__, #args), errn(args)
#else
#define dbg(...)
#define dbgn(args...)
#endif

using ll = long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vector<int>>;
using vvvi = vector<vector<vector<int>>>;
using vvll = vector<vector<ll>>;
using vvvll = vector<vector<vector<ll>>>;
using pi = pair<int,int>;
using vpi = vector<pi>;
using pii = pair<pi,int>;
using pl = pair<ll, ll>;
using pd = pair<ld, ld>;
using str = string;
const ll MOD = 1000000007;
const int INF = 1e9;
const ll INF64 = 1e18;

template <typename T>
void print(T a, string sep = "\n")
{
    cout << a << sep;
}
template <typename T, typename T2>
void print(pair<T, T2> a, string sep = " ")
{
    print(a.first, sep);
    print(a.second);
}
template<typename T>
void print(const vector<T>& a, string sep = " ") {
    for (size_t i = 0; i < a.size(); ++i) {
        cout << a[i] << (i + 1 == a.size() ? "" : sep);
    }
    cout << "\n";
}
template <typename T>
void print(T a[], int aSize, string sep = " ")
{
    for(int i = 0; i < aSize; i++)
    {
        if (i == aSize-1)
            cout << a[i];
        else
            cout << a[i] << sep;
    }
    cout << "\n";
}

struct Helper{
    ll t, z, y;
};

ll count(ll T, const vec<Helper>& h){
    ll t = 0;
    each(i, h){
        ll bt = i.z * i.t + i.y;
        ll fb = T / bt;
        ll rt = T % bt;
        t += fb * i.z + min(i.z, rt / i.t);
    }
    return t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    cin >> m >> n;

    vec<Helper> h(n);
    FOR(i, 0, n) cin >> h[i].t >> h[i].z >> h[i].y;

    if (m == 0){
        print(0);
        FOR(i, 0, n) cout << 0 << (i == n - 1 ? "" : " ");
        cout << "\n";
        return 0;
    }

    ll l = -1;
    ll r = 1e9;

    while(r > l + 1){
        ll M = (l + r) / 2;
        if (count(M, h) >= m) r = M;
        else l = M;
    }

    print(r);

    vll ans(n);
    ll t = 0;

    FOR(i, 0, n){
        ll bt = h[i].z * h[i].t + h[i].y;
        ll fb = r / bt;
        ll rt = r % bt;

        ans[i] = fb * h[i].z + min(h[i].z, rt / h[i].t);
        t += ans[i];
    }

    FOR(i, 0, n){
        if (t > m){
            ll d = t - m;

            if(ans[i] >= d){
                ans[i] -= d;
                t = m;
            }
            else{
                t -= ans[i];
                ans[i] = 0;
            }
        }
    }

    print(ans);

    return 0;
}
