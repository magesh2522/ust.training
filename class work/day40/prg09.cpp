#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

vector<vector<int>> makesubarray(deque<int> dq, int k) {
    vector<vector<int>> V;
    for (int i = 0; i <= dq.size() - k; i++) { 
        vector<int> v;
        for (int j = 0; j < k; j++) {
            v.push_back(dq[i + j]);
        }
        V.push_back(v);
    }
    return V;
}

deque<int> findmax(vector<vector<int>> v) {
    deque<int> dq;
    for (auto& a : v) {
        int max = a[0]; 
        for (int i = 1; i < a.size(); i++) { as
            if (a[i] > max) {
                max = a[i]; 
            }
        }
        dq.push_back(max);
    }
    return dq;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        deque<int> dq;
        for (int j = 0; j < n; j++) {
            int element;
            cin >> element;
            dq.push_back(element);
        }

        for (auto& i : findmax(makesubarray(dq, k))) {
            cout << i << " "; // Add space for better formatting
        }
        cout << endl;
    }
    return 0;
}
