/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <bits/stdc++.h>

void bubbleSort(std::vector<std::string>& books) {
    int n = books.size();
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(books[j] > books[j+1]) {
                std::swap(books[j], books[j+1]);
            }
        }
    }
}

void printBooks(const std::vector<std::string>& books) {
    for(const auto& book : books) {
        std::cout << book << std::endl;
    }
}

int problem_1() {
    std::vector<std::string> books = {"Catcher in the Rye" , "The Great Gatsby", "Moby Dick", "War and Peace", "Pride and Prejudice"};
    bubbleSort(books);
    printBooks(books);
    return 0;
}
