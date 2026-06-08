#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 1. Declaration
    stack<int> st;

    // 2. Push elements onto the top - O(1)
    st.push(10);
    st.push(20);
    st.push(30); // 30 is now at the top

    // 3. Look at the top element - O(1)
    cout << "Top element: " << st.top() << "\n";

    // 4. Remove the top element - O(1)
    st.pop();

    // 5. Check size and process untill empty
    cout << "Stack size: " << st.size() << "\n";

    while (!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    cout << "\n";

    return 0;
}