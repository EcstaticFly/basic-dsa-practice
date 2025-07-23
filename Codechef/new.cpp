#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm> 
using namespace std;

bool check(const vector<int>& c, const vector<vector<int>>& p) {
    int N = c.size();
    for (const auto& photo : p) {
        int count = 0; 
        int a = -1, b= -1;  
        for (int i = 0, j = 0; i < N; ++i) {
            if (c[i] != photo[j]) {
                ++count;
                if (a== -1) {
                    a = i;
                    b= j;
                }
                else if (a != -1 && b == -1) {
                    b= j;
                }
                
                else {
                    count = 3;
                    break;
                }
                --j;  
            }
            ++j;
        }

        if (count > 2) return false;
        if (count == 2) {
            if (!(a< b && c[a] == photo[b])) return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    
    vector<vector<int>> p(5, vector<int>(N));
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> p[i][j];
        }
    }

    
    vector<int> oo = p[0];
    unordered_set<int> md; 
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (p[j][i] != oo[i] && md.find(p[j][i]) == md.end()) {
                vector<int> c = oo;
                int m = p[j][i];

                
                cout << endl;

                auto it = find(c.begin(), c.end(), m);

                if (it == c.end()) {
                    cerr <<endl;
                    return -1;
                } else {
                    cout<< endl;
                }
                c.erase(it);
                c.insert(c.begin() + i, m);
                

                if (check(c, p)) {
                    return 0;
                }
                md.insert(m);
            }
        }
    }
    for (int x : oo) cout << x <<endl;
    cout << endl;

    return 0;
}