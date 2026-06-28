#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, choice;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\n===== ARRAY MENU =====\n";
        cout << "1. Display Array\n";
        cout << "2. Find Maximum Element\n";
        cout << "3. Find Minimum Element\n";
        cout << "4. Find Sum\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements: ";
                for (int num : arr)
                    cout << num << " ";
                cout << endl;
                break;

            case 2: {
                int maxElement = arr[0];

                for (int num : arr)
                    if (num > maxElement)
                        maxElement = num;

                cout << "Maximum Element = " << maxElement << endl;
                break;
            }

            case 3: {
                int minElement = arr[0];

                for (int num : arr)
                    if (num < minElement)
                        minElement = num;

                cout << "Minimum Element = " << minElement << endl;
                break;
            }

            case 4: {
                int sum = 0;

                for (int num : arr)
                    sum += num;

                cout << "Sum = " << sum << endl;
                break;
            }

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}