#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 1. Declaration: map<Key_Type, Value_Type>
    map<string, int> mp;

    // 2. Insering values - O(log N)
    mp["Krasnoyarsk"] = 24;
    mp["Moscow"] = 77;
    mp["Tomsk"] = 70;

    // 3. Accessing values - O(log N)
    cout << "Krasnoyarsk code: " << mp["Krasnoyarsk"] << "\n";

    // 4. Checking if a key exists
    if(mp.count("Moscow")){
        cout << "Moscow is in the map!\n";
    }

    // 5. Printing elements (Sorted automatically by Key!)
    // For maps, x.first is the Key, x.second is the Value
    for (const auto &x: mp){
        cout << x.first << "->" << x.second << "\n";
    }

    return 0; 
}