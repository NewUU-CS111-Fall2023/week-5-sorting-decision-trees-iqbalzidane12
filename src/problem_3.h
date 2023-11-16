#include <iostream>
#include <vector>
using namespace std;

void rearrangeSoldiers(vector<int>& soldiers) {
    for (int i = 0; i < soldiers.size() - 1; i += 2) {
        swap(soldiers[i], soldiers[i + 1]);
    }
}

int problem_3() {
    vector<int> soldiers = {1, 2, 3, 4, 5};
    rearrangeSoldiers(soldiers);
    for (int i = 0; i < soldiers.size(); i++) {
        cout << soldiers[i] << " ";
    }
    return 0;
}
