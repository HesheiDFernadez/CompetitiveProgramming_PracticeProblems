#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 21, 4, 45, 66, 93};
    int size = 6;
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}
