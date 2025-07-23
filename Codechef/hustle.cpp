#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n) {
    vector<int> arr(n, 0);
    
    set<pair<int, int>> segments;
    
    segments.insert({-n, 0});
    
    for (int iteration = 1; iteration <= n; iteration++) {
        auto it = segments.begin();
        int length = -it->first;
        int start = it->second;
        
        segments.erase(it);
        
        int middleIndex = start + (length - 1) / 2;

        arr[middleIndex] = iteration;

        if (middleIndex > start) {
            int leftLength = middleIndex - start;
            segments.insert({-leftLength, start});
        }
        
        if (middleIndex < start + length - 1) {
            int rightLength = start + length - 1 - middleIndex;
            segments.insert({-rightLength, middleIndex + 1});
        }
    }
    
    return arr;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> result = solve(n);
    
    for (int i = 0; i < n; i++) {
        cout << result[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;
    
    return 0;
}