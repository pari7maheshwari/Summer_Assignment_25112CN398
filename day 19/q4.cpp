#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of square matrix: ";
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    cout << "Enter matrix elements:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int primarySum = 0;
    int secondarySum = 0;

    for(int i = 0; i < n; i++)
    {
        primarySum += arr[i][i];
        secondarySum += arr[i][n - i - 1];
    }

    cout << "Primary Diagonal Sum = " << primarySum << endl;
    cout << "Secondary Diagonal Sum = " << secondarySum << endl;

    return 0;
}