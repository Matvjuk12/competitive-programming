#include <bits/stdc++.h>

using namespace std;

template <typename T>
using us = unordered_set<T>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 1. Declaration 
    us<int> s;

    // 2. Inserting elements - O(1)
    s.insert(40);
    s.insert(10);
    s.insert(50);
    s.insert(10); // Duplicate! Ignored.

    // 3. Checking existence - O(1)
    if (s.count(40)){
        cout << "40 is in the unordered set!\n";
    }

    // 4. Printing elements (the order is completely random!)
    for (int x : s){
        cout << x << " ";
    }
    cout << "\n";

    // 5. Removing an element - O(1)
    s.erase(40);

    return 0;
}