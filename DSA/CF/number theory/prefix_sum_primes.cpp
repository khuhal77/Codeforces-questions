#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count1 = 0;
    int count2 = 0;
    int temp;

    // Count frequency of 1s and 2s
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp == 1) count1++;
        else count2++;
    }

    // Step 1: Print one 2 if available
    if (count2 > 0) {
        cout << "2 ";
        count2--;
    }

    // Step 2: Print one 1 if available
    if (count1 > 0) {
        cout << "1 ";
        count1--;
    }

    // Step 3: Print remaining 2s
    while (count2 > 0) {
        cout << "2 ";
        count2--;
    }

    // Step 4: Print remaining 1s
    while (count1 > 0) {
        cout << "1 ";
        count1--;
    }

    return 0;
}