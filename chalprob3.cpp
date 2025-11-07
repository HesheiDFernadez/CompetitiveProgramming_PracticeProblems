#include <iostream>
using namespace std;

int main() {
    int n;
    int evenCount = 0, oddCount = 0;

    cout << "How many numbers will you enter? ";
    cin >> n;

    int numbers[n];

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "\nEven numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}
