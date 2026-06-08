#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

template <typename T>
using pq = priority_queue<T>;
template <typename T>
using q = queue<T>;
template <typename T>
using v = vector<T>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // A. MAX-HEAP (default: largest element at the top)
    pq<int> max_pq;
    max_pq.push(10);
    max_pq.push(50);
    max_pq.push(30);

    cout << "Max-heap top: " << max_pq.top() << "\n";
    max_pq.pop(); // Removes 50

    // B. MIX-HEAP
    // You MUST declare it with these 3 arguments:
    priority_queue<int, vi, greater<int>> min_pq;

    min_pq.push(10);
    min_pq.push(50);
    min_pq.push(30);

    cout << "Min-heap top: " << min_pq.top() << "\n";
    min_pq.pop(); // Removes 10

    return 0;
}