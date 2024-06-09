#include <iostream>
#include <vector>

using namespace std;

void permutations2(vector<int> &a, vector<vector<int>> &ans, int idx) {
    if (idx == a.size()) {
        ans.push_back(a);
        return;
    }

    for (int i = idx; i < a.size(); i++) {
        swap(a[idx], a[i]);
        permutations2(a, ans, idx + 1);
        swap(a[idx], a[i]); // backtrack
    }
}

int main() {
    vector<int> a ;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    vector<vector<int>> ans;

    permutations2(a, ans, 0);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
