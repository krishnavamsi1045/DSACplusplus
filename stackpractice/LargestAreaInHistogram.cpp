#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxi(vector<int> a) {
    int Max = INT_MIN;
    int n = a.size();

    int i = 0;
    while (i < n) {
        int area = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] <= a[j]) {
                area++;
            } else {
                break;
            }
        }
        Max = max(Max, a[i] * area);
        i++;
    }

    return Max;
}

int main() {
    vector<int> a;
    a.push_back(2);
    a.push_back(1);
    a.push_back(5);
    a.push_back(6);
    a.push_back(2);
    a.push_back(3);
    cout << maxi(a);
    return 0;
}
