#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    cout << "Numbers divisible by both 2 and 7 from " << start << " to " << end << ":" << endl;

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0 && i % 7 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
