#include <bits/stdc++.h>

using namespace std;
int main(){
    // 1. Declaration 
    vector<int> v; // Empty vector of integers
    vector<int> v_size(10); // Vector of size 10, all filled at 0
    
    // 2. Addadin element O(1) time
    v.push_back(10);
    v.push_back(5);
    v.push_back(20);

    // 3. Accessing elements O(1) time
    cout << "First element " << v[0] << '\n';
    cout << "Size of vector " << v.size() << "\n";

    // 4. Iterating through a vector
    for (int x : v){
        cout << x << " ";
    }
    cout << "\n";

    // 5. Removing the Last element O(1) time
    v.pop_back();

    return 0;
}