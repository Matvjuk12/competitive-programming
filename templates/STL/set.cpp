#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 1. Declaration 
    set<int> st;

    // 2. Inserting elements - O(log N)
    st.insert(40);
    st.insert(10);
    st.insert(50);
    st.insert(10);

    // 3. Size of set
    cout << "Set size: " << st.size() << "\n"; // Prints 3 (10, 40, 50)

    // 4. Checking if an element exists - O(log N)
    // .count() returns 1 if exists, 0 if not
    if (st.count(40)){
        cout << "40 is in the set\n";
    }

    // 5. Printing elements (Always sorted automatically!)
    for (int x : st){
        cout << x << " ";
    }
    cout << "\n";

    // Removing an element - O(log N)
    st.erase(40);

    return 0;
}