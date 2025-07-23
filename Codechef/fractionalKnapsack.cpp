#include<bits/stdc++.h>
using namespace std;

void fk(vector<int>& values, vector<int>& weights,int W) {
    int n = values.size();
    vector<pair<double, int>> k(n);
    for (int i = 0; i < n; i++) {
        k[i].first = (double)values[i] / weights[i];
        k[i].second = i;
    }
    sort(k.begin(), k.end(), greater<pair<double, int>>());
    double totalValue = 0.0;
    for (int i = 0; i < n; i++) {
        if (weights[k[i].second] <= W) {
            totalValue += values[k[i].second];
            W -= weights[k[i].second];
        }
        else {
            double f= (double)W / weights[k[i].second];
            totalValue += values[k[i].second] * f;
            break;
        }
    }
    cout << "Max. value theif can take: " << totalValue << endl;
}


int main(){
    int W;
    cout<<"Enter max weight: ";
    cin>>W;
    int n;
    cout<<"Enter no. of elments: ";
    cin>>n;
    vector<int> weights;
    cout<<"Enter weights: ";
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        weights.push_back(p);
    }
    vector<int> values;
    cout<<"Enter values: ";
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        values.push_back(p);
    }
    fk(values,weights,W);
    return 0;
}