#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 1. Declaration
    deque<int> dq;

    // 2. Add elements to the both ends - O(1)
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(10);

    // 3. Access elements by index - O(1)
    cout << "Element at index 1: " << dq[1] << "\n";
    cout << "Front element: " << dq.front() << "\n";
    cout << "Back element: " << dq.back() << "\n";

    // 4. Remove elements from both ends - O(1)
    dq.pop_front();
    dq.pop_back();

    return 0;
}