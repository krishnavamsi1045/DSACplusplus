#include <iostream>
#include <vector>
using namespace std;

void merging(vector<int> &v, int start, int mid, int end) {
    int leftArray = mid - start + 1;
    int rightArray = end - mid;

    vector<int> leftarr(leftArray);
    vector<int> rightarr(rightArray);

    for (int i = 0; i < leftArray; i++) {
        leftarr[i] = v[start + i];
    }
    for (int j = 0; j < rightArray; j++) {
        rightarr[j] = v[mid + 1 + j];
    }

    int x = 0, y = 0, idx = start;
    while (x < leftArray && y < rightArray) {
        if (leftarr[x] <= rightarr[y]) {
            v[idx++] = leftarr[x++];
        } else {
            v[idx++] = rightarr[y++];
        }
    }
    while (x < leftArray) {
        v[idx++] = leftarr[x++];
    }
    while (y < rightArray) {
        v[idx++] = rightarr[y++];
    }
}

void merge(vector<int> &v, int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = (start + end) / 2;
    merge(v, start, mid);
    merge(v, mid + 1, end);
    merging(v, start, mid, end);
}

int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(1);
    v.push_back(5);
    int start = 0;
    int end = v.size() - 1;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    merge(v, start, end);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
