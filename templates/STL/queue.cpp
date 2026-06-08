#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> q;

    // 1. Add elements to the back - O(1)
    q.push(10); // Queue [10]
    q.push(20); // Queue [10, 20]
    q.push(30); // Queue [10, 20, 30]

    // 2. Look at the front element - O(1)
    cout << "Front element: " << q.front() << "\n";

    // 3. remove the front element - O(1)
    q.pop();

    // 4. Standart BFS-style loop processing
    while(!q.empty()){
        int current = q.front();
        cout << current << " ";
        q.pop();
    }
    cout << "\n";

    return 0;
}