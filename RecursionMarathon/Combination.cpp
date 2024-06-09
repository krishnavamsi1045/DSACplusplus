#include <iostream>
#include <vector>

using namespace std;

void combination(int n, int k, int i, vector<int>& dummy, vector<vector<int > >& power) {
    // Check if the combination is complete
    if (k == 0) {
        power.push_back(dummy);
        return;
    }
    // If index i exceeds n, then there are no more elements to consider
    if (i > n) {
        return;
    }

    // Include the current element i in the combination
    dummy.push_back(i);
    combination(n, k - 1, i + 1, dummy, power);

    // Exclude the current element i from the combination
    dummy.pop_back();
    combination(n, k, i + 1, dummy, power);
}

int main() {
    int n = 4;
    int k = 2;
    vector<int> dummy;
    vector<vector<int > > power;

    combination(n, k, 1, dummy, power);

    // Print all combinations
    for(int i=0;i<power.size();i++){
        for(int j=0;j<power[i].size();j++){
            cout<<power[i][j]<<" ";
        }
        cout<<endl;
    }
}
