#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first sorted array: ";
    cin >> n1;

    vector<int> arr1(n1);

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second sorted array: ";
    cin >> n2;

    vector<int> arr2(n2);

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> merged;
    int i = 0, j = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n1) {
        merged.push_back(arr1[i]);
        i++;
    }

    while (j < n2) {
        merged.push_back(arr2[j]);
        j++;
    }

    cout << "\nMerged Array: ";
    for (int num : merged) {
        cout << num << " ";
    }

    return 0;
}