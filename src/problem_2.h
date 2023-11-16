#include <iostream>
#include <bits/stdc++.h>
void selectionSort(std::vector<int>& denominations) {
    int n = denominations.size();
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(denominations[i], denominations[minIndex]);
    }
}

void printDenominations(const std::vector<int>& denominations) {
    for(const auto& denomination : denominations) {
        std::cout << denomination << std::endl;
    }
}

int problem_2 ()  {
    std::vector<int> denominations = {50, 20, 100, 10, 5, 1};
    selectionSort(denominations);
    printDenominations(denominations);
    return 0;
}
