#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int count_elements(vector<int>& arr) {
    int count = 0;
    for (int i = 1; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }
    return count;
}

int problem_4 () {
    vector<int> arr = {1, 3, 2, 4, 1, 5, 2, 3};
    cout << count_elements(arr);
    return 0;
}
