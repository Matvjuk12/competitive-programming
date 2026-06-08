#include <bits/stdc++.h>

using namespace std;

template <typename T1, typename T2>
using ump = unordered_map<T1, T2>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 1. Creation
    ump<string, int> mp;

    // 2. Insering values - O(log N)
    mp["Krasnoyarsk"] = 24;
    mp["Moscow"] = 77;
    mp["Tomsk"] = 70;

    // 3. Accessing values - O(log N)
    cout << "Krasnoyarsk code: " << mp["Krasnoyarsk"] << "\n";

    // 4. Checking if a key exists
    if(mp.count("Moscow")){
        cout << "Moscow is in the unordered map!\n";
    }

    // 5. Printing elements
    for (const auto &x: mp){
        cout << x.first << "->" << x.second << "\n";
    }

    return 0;
}