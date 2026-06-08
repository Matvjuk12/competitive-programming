#include <bits/stdc++.h>

using namespace std;

bool compare_pairs(const pair<int, int> &a, const pair<int, int> &b){
    if (a.second != b.second){
        return a.second > b.second; // Sort by second element descending
    }
    return a.first < b.first; // If second elements are equal, sort by first ascending
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {6, 7, 1, 5, 3};

    // Sort ascending: {1, 3, 5, 6, 7}
    sort(v.begin(), v.end());

    for (int x : v){
        cout << x << " ";
    }
    cout << "\n";

    // Sort descending using greater<int>(): {7, 6, 5, 3, 1}
    sort(v.begin(), v.end(), greater<int>());

    for (int x : v){
        cout << x << " ";
    }
    cout << "\n";

    // Sorts the vector backwards directly
    sort(v.rbegin(), v.rend());

    for (int x : v){
        cout << x << " ";
    }
    cout << "\n";

    vector<pair<int, int>> points = {{1, 5}, {2, 3}, {3, 5}};

    // Use the custom comparator as the 3rd argument
    sort(points.begin(), points.end(), compare_pairs);

    for (pair<int, int> x : points){
        cout << x.first << " " << x.second << "\n";
    }
    cout << "\n";

    return 0;
}